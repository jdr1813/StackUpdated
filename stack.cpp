/*********************
Name: Justin Rivas
Coding 04
Purpose: Building a stack object that works with struct data types.
**********************/

#include "stack.h"

Stack::Stack(int stackSize){
    top = -1;
    if(stackSize >= DEFAULT_SIZE){
        size = stackSize;
    } else{
        size = DEFAULT_SIZE;
    }
    stack = new Data*[size];
}

Stack::~Stack(){
    for(int i = top; i >= 0; i--){
        delete stack[i];
    }
    delete[] stack;
}

bool Stack::push(int id, string *str){
    bool pushCompleted = false;
    
    if(top < size - 1 && *str != "\0" && id > 0){
        Data *newItem = new Data;
        newItem->id = id;
        newItem->information = *str;
        stack[++top] = newItem;
        pushCompleted = true;
    }

    return pushCompleted;
}

bool Stack::pop(Data *newDataStruct){
    bool popCompleted = false;
    if(!isEmpty()){
        newDataStruct->id = stack[top]->id;
        newDataStruct->information = stack[top]->information;
        delete stack[top];
        top--;
        popCompleted = true;
    } else{
        newDataStruct->id = EMPTY_ID;
        newDataStruct->information = EMPTY_STRING; 
    }
    return popCompleted;
}

bool Stack::peek(Data *peekedDataStruct){
    bool peekCompleted = false;
    if(!isEmpty()){
        peekedDataStruct->id = stack[top]->id;
        peekedDataStruct->information = stack[top]->information;
        peekCompleted = true;
    } else{
        peekedDataStruct->id = EMPTY_ID;
        peekedDataStruct->information = EMPTY_STRING; 
    }
    return peekCompleted;
}

bool Stack::isEmpty(){
    return top < 0;
}