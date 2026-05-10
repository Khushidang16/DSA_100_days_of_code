// Min Heap Implementation

#include <stdio.h>

int heap[100];
int size = 0;

void insert(int value) {

    heap[size] = value;

    int i = size;

    while(i != 0 && heap[(i - 1) / 2] > heap[i]) {

        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;

        i = (i - 1) / 2;
    }

    size++;
}

void display() {

    for(int i = 0; i < size; i++)
        printf("%d ", heap[i]);
}

int main() {

    insert(20);
    insert(10);
    insert(5);
    insert(30);

    display();

    return 0;
}