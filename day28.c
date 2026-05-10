// Circular Linked List Creation and Traversal

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {

    struct Node *head = NULL, *temp, *newNode;

    int n;

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

    temp->next = head;

    printf("Circular Linked List:\n");

    temp = head;

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(Back to Head)");

    return 0;
}