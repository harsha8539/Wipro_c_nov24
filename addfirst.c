#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void addFirst(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head; 
    *head = newNode;       
}


void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; 

    addFirst(&head, 10); 
    addFirst(&head, 20); 
    addFirst(&head, 30); 
    printf("Linked List: ");
    displayList(head); 

    return 0;
}
