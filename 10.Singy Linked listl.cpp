#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (!*head) *head = newNode;
    else {
        struct Node* temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;
    if (temp && temp->data == key) 
	*head = temp->next, free(temp);
    else {
        while (temp && temp->data != key) prev = temp, temp = temp->next;
        if (temp) prev->next = temp->next, free(temp);
        else printf("Element %d not found.\n", key);
    }
}

void displayList(struct Node* head) {
    while (head) printf("%d -> ", head->data), head = head->next;
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 10); 
	insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5); 
	insertAtEnd(&head, 30);
    printf("Linked List: "); 
	displayList(head);

    deleteNode(&head, 20);
	printf("After deleting 20: ");
	displayList(head);
    deleteNode(&head, 5); 
	printf("After deleting 5: "); 
	displayList(head);

    return 0;
}

