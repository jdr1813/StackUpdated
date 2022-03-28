/*********************
Name: Justin Rivas
Coding 04
Purpose: Building a stack object that works with struct data types.
**********************/


#include "main.h"

int main(int argc, char **argv) {
    srand(time(NULL));

    if(argc == 2){
        int stackSize = atoi(argv[1]);
        if(stackSize >= DEFAULT_SIZE){

            Stack myStack(stackSize);
            Data myDataStructure;
            int random;
            string strtemp;

            cout << "Beginning tests" << endl;
            cout << endl;
            cout << "Testing empty stack" << endl;
            cout << "=====================================================" << endl;

            cout << "Testing empty method on an empty stack" << endl;
            if(myStack.isEmpty()){
                cout << "Stack is empty" << endl;
            } else{
                cout << "Stack is not empty" << endl;
            }

            cout << endl;

            cout << "Attempting to peek an empty stack" << endl;

            if(myStack.peek(&myDataStructure)){
                cout << "Peeked values" << endl;
                cout << "ID: " << myDataStructure.id << endl;
                cout << "Info: " << myDataStructure.information << endl;
            } else{
                cout << "Stack is empty" << endl;
            }

            cout << endl;

            cout << "Attempting to pop an empty stack" << endl;

            if(myStack.pop(&myDataStructure)){
                cout << "Pop successful." << endl;
                cout << "Popped ID: " << myDataStructure.id << endl;
                cout << "Popped Info: " << myDataStructure.information << endl;
            } else{
                cout << "Pop failed stack is empty" << endl;
            }
            cout << endl;


            cout << "Testing full operations." << endl;
            cout << "=====================================================" << endl;

            cout << "Filling stack with random numbers as ID's and random strings as Info" << endl;
            cout << endl;

            for(int i=0; i < stackSize*MULTIPLIER; i++){
                int random = (rand() % 100) - 25;
                rand_string(&strtemp);
                if(myStack.push(random, &strtemp)){
                    cout << "Pushed ID and info successfully" << endl;
                    cout << "ID: " << random << endl;
                    cout << "Info: " << strtemp << endl;
                    cout << endl;

                } else{
                    if(random < 0 || strtemp == "\0"){
                        cout << "Failed push. Number must be positive and string must not be null" << endl;
                        cout << "Attempted ID: " << random << endl;
                        cout << "Attempted string: " << strtemp << endl;
                        cout << endl;
                    }else{
                        cout << "Stack is full cannot push" << endl;
                        cout << endl;
                    }

                }
            }
            cout << endl;


            cout << "Testing empty method on the stack" << endl;

            if(myStack.isEmpty()){
                cout << "Stack is empty" << endl;
            } else{
                cout << "Stack is not empty" << endl;
            }
            cout << endl;

            cout << "Testing peek method on the stack" << endl;

            if(myStack.peek(&myDataStructure)){
                cout << "Peeked values" << endl;
                cout << "ID: " << myDataStructure.id << endl;
                cout << "Info: " << myDataStructure.information << endl;
            } else{
                cout << "Stack is empty" << endl;
            }
            cout << endl;

            cout << "Testing pop method on the stack" << endl;

            if(myStack.pop(&myDataStructure)){
                cout << "Pop successful." << endl;
                cout << "Popped ID: " << myDataStructure.id << endl;
                cout << "Popped Info: " << myDataStructure.information << endl;
                cout << endl;
            } else{
                cout << "Pop failed stack is empty" << endl;
            }
            cout << endl;

            cout << "Popping the stack until it's empty" << endl;
            while(!myStack.isEmpty()){
                if(myStack.pop(&myDataStructure)){
                    cout << "Pop successful." << endl;
                    cout << "Popped ID: " << myDataStructure.id << endl;
                    cout << "Popped Info: " << myDataStructure.information << endl;
                    cout << endl;
                } else{
                    cout << "Pop failed stack is empty" << endl;
                }
            }
            cout << endl;

            cout << "Testing empty method on an empty stack" << endl;
            if(myStack.isEmpty()){
                cout << "Stack is empty" << endl;
            } else{
                cout << "Stack is not empty" << endl;
            }
            cout << endl;

            cout << "Filling stack halfway and testing the middle of the stack..." << endl;
            cout << "============================================================" << endl;

            for(int i=0; i < stackSize/2; i++){
                int random = (rand() % 100) - 25;
                string strtemp;
                rand_string(&strtemp);
                if(myStack.push(random, &strtemp)){
                    cout << "Pushed ID and info successfully" << endl;
                    cout << "ID: " << random << endl;
                    cout << "Info: " << strtemp << endl;
                    cout << endl;

                } else{
                    if(random < 0 || strtemp == "\0"){
                        cout << "Failed push. Number must be positive and string must not be null" << endl;
                        cout << "Attempted ID: " << random << endl;
                        cout << "Attempted string: " << strtemp << endl;
                        cout << endl;
                    }else{
                        cout << "Stack is full cannot push" << endl;
                        cout << endl;
                    }

                }
            }
            cout << endl;

            cout << "Popping the stack until it's empty" << endl;
            while(!myStack.isEmpty()){
                if(myStack.pop(&myDataStructure)){
                    cout << "Pop successful." << endl;
                    cout << "Popped ID: " << myDataStructure.id << endl;
                    cout << "Popped Info: " << myDataStructure.information << endl;
                    cout << endl;
                } else{
                    cout << "Pop failed stack is empty" << endl;
                }
            }
            cout << endl;

            cout << "Random testing..." << endl;
            cout << "============================================================" << endl;

            int choice = rand() % CHOICES + 1;
            for(int i=0; i < stackSize*RANDOM_MULTIPLIER; i++){
                switch (choice)
                {
                    case 1:
                    case 2:
                        random = (rand() % MAX_INT) + 1;
                        rand_string(&strtemp);
                        if(myStack.push(random, &strtemp)){
                            cout << "Pushed ID and info successfully" << endl;
                            cout << "ID: " << random << endl;
                            cout << "Info: " << strtemp << endl;
                            cout << endl;

                        } else{
                            if(random < 0 || strtemp == "\0"){
                                cout << "Failed push. Number must be positive and string must not be null" << endl;
                                cout << "Attempted ID: " << random << endl;
                                cout << "Attempted string: " << strtemp << endl;
                                cout << endl;
                            }else{
                                cout << "Stack is full cannot push" << endl;
                                cout << endl;
                            }
                        }                   
                        break;
                    case 3:
                    case 4:
                        if(myStack.pop(&myDataStructure)){
                            cout << "Pop successful." << endl;
                            cout << "Popped ID: " << myDataStructure.id << endl;
                            cout << "Popped Info: " << myDataStructure.information << endl;
                            cout << endl;
                        } else{
                            cout << "Pop failed stack is empty" << endl;
                            cout << endl;
                        }
                        break;
                    case 5:
                        if(myStack.peek(&myDataStructure)){
                            cout << "Peeked values" << endl;
                            cout << "ID: " << myDataStructure.id << endl;
                            cout << "Info: " << myDataStructure.information << endl;
                            cout << endl;
                        } else{
                            cout << "Stack is empty" << endl;
                            cout << endl;
                        }
                        break;
                    case 6:
                        if(myStack.isEmpty()){
                            cout << "Stack is empty" << endl;
                            cout << endl;
                        } else{
                            cout << "Stack is not empty" << endl;
                            cout << endl;
                        }
                        break;                       
                }
                choice = rand() % CHOICES + 1;
            }
            
        } else{
            cout << argv[0] << " Accepts only one int input >= 2" << endl;
        }
    } else{
        cout << "You must input 1 positive number >=2 after " << argv[0] << endl;
    }
    
    return 0;
}
