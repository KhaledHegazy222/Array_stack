#include "global.h"
#include "stack.h"









// Initializing the stack
void CreateStack(Stack* stack){
    stack->top = 0;
}





void ClearStack(Stack * stack){
    stack->top = 0;

}




int push(StackEntry item,Stack* stack){
    if( StackFull(stack)){
        return 0;
    }
    else{
        stack->entry[stack->top++] = item;
        return 1;
    }
}




int pop(StackEntry *e, Stack* stack){
    if( StackEmpty(stack)){
        return 0;
    }
    else{
        stack->top--;
        *e = stack->entry[stack->top];
        // in one line ::
        // *e = stack->entry[--stack->top];
        return 1;
    }
}



int StackTop(StackEntry *element ,Stack* stack){
    if(StackEmpty(stack)){
        return 0;
    }
    else{
        *element = stack->entry[stack->top - 1];
        return 1;
    }


}



int StackSize(Stack * stack){
    return stack->top ;

}



int StackFull(Stack* stack){
    return stack->top >= MAXSTACK;
}





int StackEmpty(Stack* stack){
    return stack->top <= 0;
    // is equivelent to =======> return !stack->top ;)
}



void TraverseStack(Stack* stack,void(*pointer_to_function)(StackEntry)){
    for(int i = stack->top; i > 0;i--){
       (*pointer_to_function)(stack->entry[i-1]);
    }

}
