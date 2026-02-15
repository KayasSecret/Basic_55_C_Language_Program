// Linked List implementation using C.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert() {
    int value;
    struct node *newnode, *temp;

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value to insert: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void delete() {
    struct node *temp;

    if (head == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    temp = head;
    printf("Deleted element: %d\n", head->data);
    head = head->next;
    free(temp);
}

void traverse() {
    struct node *temp;

    if (head == NULL) {
        printf("Linked list is empty\n");
        return;
    }

    temp = head;
    printf("Linked list elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int choice;

    do {
        printf("\n1. INSERT\n2. DELETE\n3. TRAVERSE\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                traverse();
                break;
            case 4:
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
