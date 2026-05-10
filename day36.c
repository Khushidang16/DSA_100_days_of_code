// Circular Queue Using Array

#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {

    if((rear + 1) % MAX == front) {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear = (rear + 1) % MAX;

    queue[rear] = value;
}

void dequeue() {

    if(front == -1) {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d dequeued\n", queue[front]);

    if(front == rear)
        front = rear = -1;

    else
        front = (front + 1) % MAX;
}

void display() {

    int i = front;

    while(i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX;
    }

    printf("%d", queue[rear]);
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();

    display();

    return 0;
}