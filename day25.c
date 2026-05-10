// Count Occurrences of an Element in Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *temp, *newNode;

    int n, key, count = 0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if(head == NULL) {
            head = temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Enter element to count: ");
    scanf("%d", &key);

    temp = head;

    while(temp != NULL) {

        if(temp->data == key)
            count++;

        temp = temp->next;
    }

    printf("Occurrences = %d", count);

    return 0;
}