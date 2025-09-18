#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *head = NULL;

Node *getnode(int x) {
    Node *newnode = malloc(sizeof(Node));
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

void print_list() {
    Node *temp = head;
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_first(int x) {
    Node *newnode = getnode(x);
    newnode->next = head;
    head = newnode;
}

void insert_last(int x) {
    Node *newnode = getnode(x);
    if (head == NULL) {
        head = newnode;
    } else {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}

void insert_at_pos(int Data, int pos) {
    Node *newnode = getnode(Data);
    if (pos == 1 || head == NULL) {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    if (temp == NULL) return; // invalid pos
    newnode->next = temp->next;
    temp->next = newnode;
}

void delete_first() {
    if (head == NULL) return;
    Node *temp = head;
    head = head->next;
    free(temp);
}

void delete_last() {
    if (head == NULL) return;
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    Node *temp1 = head;
    while (temp1->next->next != NULL)
        temp1 = temp1->next;
    free(temp1->next);
    temp1->next = NULL;
}

void delete_at_pos(int pos) {
    if (head == NULL) return;
    if (pos == 1) {
        delete_first();
        return;
    }
    Node *temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) return; // invalid pos
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
}

Node* Reverse_list() {
    Node *next = NULL;
    Node *current = head;
    Node *prev = NULL;

    while (current != NULL) {
        next = current->next;   // store next node
        current->next = prev;   // reverse link
        prev = current;         // move prev forward
        current = next;         // move current forward
    }
    return prev; // new head
}

int main() {
    insert_first(5);
    insert_first(4);
    insert_first(3);
    insert_first(2);
    insert_first(1);
    insert_last(6);

    printf("Original list:\n");
    print_list();

    head = Reverse_list();  
    printf("Reversed list:\n");
    print_list();

    return 0;
}
