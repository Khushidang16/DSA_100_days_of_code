// Priority Queue Using Array

#include <stdio.h>

struct Queue {
    int data;
    int priority;
};

struct Queue q[100];

int size = -1;

void insert(int value, int priority) {

    size++;

    q[size].data = value;
    q[size].priority = priority;
}

void delete() {

    int highest = 0;

    for(int i = 1; i <= size; i++) {

        if(q[i].priority > q[highest].priority)
            highest = i;
    }

    printf("Deleted element = %d\n", q[highest].data);

    for(int i = highest; i < size; i++)
        q[i] = q[i + 1];

    size--;
}

int main() {

    insert(10, 2);
    insert(20, 5);
    insert(30, 1);

    delete();

    return 0;
}