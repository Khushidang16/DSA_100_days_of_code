// Push and Pop in Stack

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {

    if(top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }

    stack[++top] = value;

    printf("%d pushed into stack\n", value);
}

void pop() {

    if(top == -1) {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped from stack\n", stack[top--]);
}

void display() {

    if(top == -1) {
        printf("Stack is Empty\n");
        return;
    }

    for(int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {

    push(10);
    push(20);
    push(30);

    pop();

    printf("Current Stack:\n");

    display();

    return 0;
}