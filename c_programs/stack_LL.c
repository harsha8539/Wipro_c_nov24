#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void push(struct Node** top, int data);
int pop(struct Node** top);
int peek(struct Node* top);
int isEmpty(struct Node* top);
void displayStack(struct Node* top);

// Push element onto stack
void push(struct Node** top, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Heap overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}


int pop(struct Node** top) {
    if (*top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = *top;
    int poppedData = temp->data;
    *top = (*top)->next;
    free(temp);
    return poppedData;
}

// Peek the top element of stack
int peek(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}


int isEmpty(struct Node* top) {
    return top == NULL;
}


void displayStack(struct Node* top) {
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* current = top;
    while (current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


int main() {
    struct Node* stack = NULL;
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Stack: ");
    displayStack(stack);

    printf("Popped: %d\n", pop(&stack));
    printf("Stack after pop: ");
    displayStack(stack);

    printf("Top element: %d\n", peek(stack));
    return 0;
}
