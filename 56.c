#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void traverse(struct Node *ptr) {
    while(ptr != NULL) {
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Main Function 
int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Memory allocation in linked list with HEAP
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // link first node and second node
    head->data = 10;
    head->next = second;

    // link second node and third node
    second->data = 20;
    second->next = third;

    // link third node and fourth node
    third->data = 30;
    third->next = fourth;

    // Terminate the last node
    fourth->data = 40;
    fourth->next = NULL;

    traverse(head);

    return 0;
}