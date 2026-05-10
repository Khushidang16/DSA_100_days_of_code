// Reverse a Queue Using Stack

#include <stdio.h>

#define MAX 100

int queue[MAX];
int stack[MAX];

int front = 0, rear = -1;
int top = -1;

void enqueue(int value) {
    queue[++rear] = value;
}

int dequeue() {
    return queue[front++];
}

void push(int value) {
    stack[++top] = value;
}

int pop() {
    return stack[top--];
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    while(front <= rear) {
        push(dequeue());
    }

    front = 0;
    rear = -1;

    while(top != -1) {
        enqueue(pop());
    }

    printf("Reversed Queue:\n");

    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}