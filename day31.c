// Stack Implementation using Array

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
}

void display() {

    if(top == -1) {
        printf("Stack is Empty");
        return;
    }

    for(int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {

    push(10);
    push(20);
    push(30);

    printf("Stack Elements:\n");

    display();

    return 0;
}