#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void deleteAtPosition(int position) {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    if (position <= 0) {
        printf("Invalid position!\n");
        return;
    }
    struct Node* temp = head;
    if (position == 1) {
        head = head->next;
        printf("Deleted node with value: %d\n", temp->data);
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    int i = 1;
    while (temp != NULL && i < position) {
        prev = temp;
        temp = temp->next;
        i++;
    }
    if (temp == NULL) {
        printf("Position out of range.\n");
        return;
    }
    prev->next = temp->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    printf("Initial Linked List:\n");
    display();
    printf("\nDeleting node at position 3...\n");
    deleteAtPosition(3);
    display();
    printf("\nDeleting node at position 1...\n");
    deleteAtPosition(1);
    display();
    printf("\nDeleting node at invalid position 10...\n");
    deleteAtPosition(10);
    display();
    return 0;
}
output:
Initial Linked List:
10 -> 20 -> 30 -> 40 -> 50 -> NULL

Deleting node at position 3...
Deleted node with value: 30
10 -> 20 -> 40 -> 50 -> NULL

Deleting node at position 1...
Deleted node with value: 10
20 -> 40 -> 50 -> NULL

Deleting node at invalid position 10...
Position out of range.
20 -> 40 -> 50 -> NULL
