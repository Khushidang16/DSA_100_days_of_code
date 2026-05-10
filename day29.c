// Rotate Linked List Right by k Places

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void display(struct Node* head) {
    while(head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}

int main() {

    int n, k;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode;

    for(int i = 0; i < n; i++) {

        newNode = (struct Node*)malloc(sizeof(struct Node));

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

    printf("Enter k: ");
    scanf("%d", &k);

    int len = 1;
    temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
        len++;
    }

    temp->next = head;

    k = k % len;
    int steps = len - k;

    temp = head;

    for(int i = 1; i < steps; i++)
        temp = temp->next;

    head = temp->next;
    temp->next = NULL;

    display(head);

    return 0;
}