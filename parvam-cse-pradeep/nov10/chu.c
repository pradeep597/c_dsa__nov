#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node *head = NULL, *tail = NULL;

void create() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = tail = newnode; // List is empty, set both head and tail to new node
    } else {
        tail->next = newnode;  // Append to the end of the list
        tail = newnode;        // Update the tail pointer
    }
}

void insert_at_begin() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = head;   // New node points to the old head
    head = newnode;         // Update head to new node
}

void insert_at_end() {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("Enter the data: ");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = NULL;

    if (tail == NULL) {
        head = tail = newnode;  // If the list is empty, head and tail are the same
    } else {
        tail->next = newnode;  // Link the new node at the end of the list
        tail = newnode;        // Update the tail pointer
    }
}

void delete_at_begin() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    head = head->next;  // Move the head pointer to the next node
    free(temp);         // Free the old head node
}

void delete_at_end() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    if (head == tail) {  // If there's only one node in the list
        free(head);
        head = tail = NULL;  // Set both head and tail to NULL
    } else {
        struct node* ptr = head;
        while (ptr->next != tail) {
            ptr = ptr->next;  // Find the second-to-last node
        }
        free(tail);         // Free the last node
        tail = ptr;         // Update tail to the second-to-last node
        tail->next = NULL;  // Set the next pointer of the new tail to NULL
    }
}

void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Create\n");
        printf("2. Insert at Beginning\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at End\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insert_at_begin();
                break;
            case 3:
                insert_at_end();
                break;
            case 4:
                delete_at_begin();
                break;
            case 5:
                delete_at_end();
                break;
            case 6:
                display();
                break;
            case 7:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
