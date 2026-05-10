// Polynomial Using Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

int main() {

    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode;

    for(int i = 0; i < n; i++) {

        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter coefficient and power: ");
        scanf("%d %d", &newNode->coeff, &newNode->power);

        newNode->next = NULL;

        if(head == NULL) {
            head = temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("Polynomial:\n");

    temp = head;

    while(temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->power);

        if(temp->next != NULL)
            printf(" + ");

        temp = temp->next;
    }

    return 0;
}