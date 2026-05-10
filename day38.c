// Deque Operations

#include <stdio.h>

#define MAX 5

int deque[MAX];
int front = -1, rear = -1;

void insertFront(int value) {

    if((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Overflow\n");
        return;
    }

    if(front == -1)
        front = rear = 0;

    else if(front == 0)
        front = MAX - 1;

    else
        front--;

    deque[front] = value;
}

void insertRear(int value) {

    if((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Overflow\n");
        return;
    }

    if(front == -1)
        front = rear = 0;

    else if(rear == MAX - 1)
        rear = 0;

    else
        rear++;

    deque[rear] = value;
}

void display() {

    int i = front;

    while(i != rear) {
        printf("%d ", deque[i]);
        i = (i + 1) % MAX;
    }

    printf("%d", deque[rear]);
}

int main() {

    insertRear(10);
    insertRear(20);
    insertFront(5);

    display();

    return 0;
}