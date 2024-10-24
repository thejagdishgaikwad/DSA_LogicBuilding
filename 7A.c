#include <stdio.h>
#include <stdlib.h> // Use stdlib.h for malloc and exit

struct node {
    int info;
    struct node *next;
};

int main() {
    struct node *new_node, *ptr, *begin = NULL;
    int item;
    int option;

    // Input first element
    new_node = (struct node*)malloc(sizeof(struct node));
    if (!new_node) {
        printf("Memory allocation failed\n");
        return 1; // Exit if malloc fails
    }

    printf("\nEnter the element: ");
    scanf("%d", &item);
    new_node->info = item;
    new_node->next = NULL;
    begin = new_node;
    ptr = begin;

    // Loop for entering more elements
    printf("\nDo you want to enter another element? 1.Yes, 2.No: ");
    scanf("%d", &option);
    while (option != 2) {
        new_node = (struct node*)malloc(sizeof(struct node));
        if (!new_node) {
            printf("Memory allocation failed\n");
            return 1; // Exit if malloc fails
        }
        
        printf("\nEnter the element: ");
        scanf("%d", &item);
        new_node->info = item;
        new_node->next = NULL;
        ptr->next = new_node;
        ptr = new_node;

        printf("\nDo you want to enter another element? 1.Yes, 2.No: ");
        scanf("%d", &option);
    }

    // Display the linked list
    printf("\nThe Linked List:\n");
    ptr = begin;
    while (ptr != NULL) {
        printf("\t%d", ptr->info);
        ptr = ptr->next;
    }

    // Search for an element
    printf("\nEnter the element to be searched: ");
    scanf("%d", &item);
    ptr = begin;
    while (ptr != NULL) {
        if (ptr->info == item) {
            printf("\nElement found in the list!");
            return 0; // Exit successfully
        }
        ptr = ptr->next;
    }
    
    printf("\nThe element is not present in the list!\n");
    return 0; // Exit successfully
}
