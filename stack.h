/*********************
Name: Justin Rivas
Coding 04
Purpose: Building a stack object that works with struct data types.
**********************/

#ifndef STACK_H
#define STACK_H

#include "data.h"

#define DEFAULT_SIZE 2
#define EMPTY_ID -1
#define EMPTY_STRING ""

class Stack {

public:

    Stack(int);
    ~Stack();
    bool push(int, string*);
    bool pop(Data*);
    bool peek(Data*);
    bool isEmpty();
    
private:
    int top;
    int size;
    Data **stack;
};

#endif //STACK_H
