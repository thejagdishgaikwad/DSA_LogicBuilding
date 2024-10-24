#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct Stack {
    int arr[MAX];
    int top;
};
void initStack(struct Stack *s) {
    s->top = -1;
}
int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}
int isEmpty(struct Stack *s) {
    return s->top == -1;
}
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        s->arr[++s->top] = value;
        printf("%d pushed onto stack.\n", value);
    }
}
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return -1;
    } else {
        return s->arr[s->top--];
    }
}
void display(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = s->top; i >= 0; i--) {
            printf("%d\n", s->arr[i]);
        }
    }
}
int main() {
    struct Stack stack;
    initStack(&stack);
    int option, value;
    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter a value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                value = pop(&stack);
                if (value != -1) {
                    printf("%d popped from stack.\n", value);
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option! Please choose again.\n");
        }
    } while (option != 4);
    return 0;
}
