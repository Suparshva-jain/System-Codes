#include <stdio.h>
#define size 5

// Declarations
int stack[size];
int top = -1;

// Display function
void display(int a[]){
    printf("[ ");
    for (int i = top; i >=0; i--) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

// Push function 
void push(int x){
    if (top == size-1) {
        printf("Stack Overflowed\n");
    }
    else {
    top++;
    stack[top] = x;
    }

    display(stack);
}

// Pop function
void pop(){
    if (top == -1) {
        printf("Stack Underflow\n");
    }
    else {
        int temp = stack[top];
        top--;
    }
    display(stack);
}

// Peak function
void peak(){
    printf("Peak of the Stack: %d", stack[top] );
}




int main(){

    display(stack);
    push(12);
    push(122);
    push(190);
    push(89);
    pop();


}

