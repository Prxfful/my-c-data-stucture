#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
void insertpos(int value, int pos) {
struct node* newnode = (struct node*)malloc(sizeof(struct node));
if(!newnode){
    printf("Memory aloocation failed\n");
    return;
}
newnode->data = value;
if(pos == 1){
    newnode->next = head;
    head = newnode;
    return;
}
struct node* temp = head;
for(int i=1;i<pos-1 && temp != NULL;i++)
temp = temp->next;
if(temp == NULL){
    printf("Position out of range\n");
    free(newnode);
    return;
}
newnode->next = temp->next;
temp->next = newnode;
}
void display() {
    struct node* temp = head;
    if(temp == NULL){
        printf("List is empty\n");
    }
    while( temp != NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertpos(10,1);
    insertpos(20,2);
    insertpos(30,3);
    insertpos(9,1);
    printf("Linked list after insertion:\n");
    display();
    return 0;
}
output:
Linked list after insertion:
9 -> 10 -> 20 -> 30 -> NULL
