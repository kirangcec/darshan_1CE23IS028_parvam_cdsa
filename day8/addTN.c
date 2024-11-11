#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
Node* addTwoNumbers(Node* head1, Node* head2) {
    Node* result = NULL;
    Node* temp1 = head1;
    Node* temp2 = head2;
    int carry = 0;

    while (temp1 != NULL || temp2 != NULL) {
        int sum = (temp1 != NULL ? temp1->data : 0) +
                  (temp2 != NULL ? temp2->data : 0) + carry;
        carry = sum / 10;
        insertNode(&result, sum % 10);
        if (temp1 != NULL) temp1 = temp1->next;
        if (temp2 != NULL) temp2 = temp2->next;
    }

    if (carry > 0) {
        insertNode(&result, carry);
    }

    return result;
}
void printList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    Node* head1 = NULL;
    Node* head2 = NULL;

    insertNode(&head1, 1);
    insertNode(&head1, 2);
    insertNode(&head1, 3);

    insertNode(&head2, 4);
    insertNode(&head2, 5);
    insertNode(&head2, 6);

    printf("Linked List 1: ");
    printList(head1);
    printf("Linked List 2: ");
    printList(head2);

    Node* result = addTwoNumbers(head1, head2);
    printf("Sum: ");
    printList(result);

    return 0;
}