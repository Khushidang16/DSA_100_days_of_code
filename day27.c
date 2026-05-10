// Find Intersection Point of Two Linked Lists

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int getCount(struct Node* head) {
    int count = 0;

    while(head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

int intersection(struct Node* h1, struct Node* h2) {

    int c1 = getCount(h1);
    int c2 = getCount(h2);

    int d = abs(c1 - c2);

    if(c1 > c2) {
        for(int i = 0; i < d; i++)
            h1 = h1->next;
    }
    else {
        for(int i = 0; i < d; i++)
            h2 = h2->next;
    }

    while(h1 != NULL && h2 != NULL) {

        if(h1 == h2)
            return h1->data;

        h1 = h1->next;
        h2 = h2->next;
    }

    return -1;
}

int main() {

    struct Node* common = (struct Node*)malloc(sizeof(struct Node));
    common->data = 30;
    common->next = NULL;

    struct Node* h1 = (struct Node*)malloc(sizeof(struct Node));
    h1->data = 10;
    h1->next = common;

    struct Node* h2 = (struct Node*)malloc(sizeof(struct Node));
    h2->data = 20;
    h2->next = common;

    printf("Intersection Point = %d", intersection(h1, h2));

    return 0;
}