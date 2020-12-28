#include "global.h"

#ifndef STACK
    #define STACK


    // defining the struct which represent the stack
    typedef struct {
        StackEntry entry[MAXSTACK];
        int top;
    }Stack;



    // declaring the functions prototypes
    void CreateStack(Stack*);
    void ClearStack(Stack*);
    int push(StackEntry ,Stack*);
    int pop(StackEntry*,Stack*);
    int StackTop(StackEntry*,Stack*);
    int StackSize(Stack*);
    int StackFull(Stack*);
    int StackEmpty(Stack*);
    void TraverseStack(Stack*,void(*)(StackEntry));


#endif
