#include<stdio.h>
#include "labexp7.h"
int main() {
    struct Node* head = NULL;

    printf("Inserting nodes at the end...\n");
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printList(head);

    printf("\nInserting a node at the beginning...\n");
    insertAtBeginning(&head, 5);
    printList(head);

    printf("\nDeleting node with value 20...\n");
    deleteNode(&head, 20);
    printList(head);
    
    printf("\nDeleting head node with value 5...\n");
    deleteNode(&head, 5);
    printList(head);

    printf("\nTrying to delete a non-existent node (99)...\n");
    deleteNode(&head, 99);
    printList(head);

    return 0;
}