#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node* createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->info = data;
    newNode->next = NULL;
    return newNode;
}

void displayNormal(struct node *head) {
    struct node *ptr = head;
    printf("The Linked List in Normal Order:\n");
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}

void displayReverse(struct node *head) {
    if (head == NULL) {
        return;
    }
    displayReverse(head->next);
    printf("%d ", head->info);
}

int main() {
    struct node *head = NULL, *ptr = NULL;
    int item, option;

    do {
        printf("Enter an element to add to the list: ");
        scanf("%d", &item);

        struct node *newNode = createNode(item);
        if (head == NULL) {
            head = newNode;
        } else {
            ptr->next = newNode;
        }
        ptr = newNode;

        printf("Do you want to add another element? 1.Yes, 2.No: ");
        scanf("%d", &option);
    } while (option == 1);

    displayNormal(head);
    printf("The Linked List in Reverse Order:\n");
    displayReverse(head);
    printf("\n");

    ptr = head;
    while (ptr != NULL) {
        struct node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }

    return 0;
}
