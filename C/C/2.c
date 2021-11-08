#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
   struct Node *next;
};


struct Node* Insert(struct Node*, int x);
void Print(struct Node*);

int main() {

    struct Node *head;
    head = NULL;
    printf("How many numbers?\n");
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter a number: \n");
        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }

}

struct Node* Insert(struct Node *head, int x) { // inserts nodes at the beginning of the linked list
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node)); // creates a node
    temp -> data = x; // sets the data of temp node to x
    temp -> next = head; // sets the next pointer of temp node to the head node
    head = temp;
    return head;
}

void Print(struct Node *head) {
    struct Node *temp = head; // use a temp variable to avoid modifying the head node
    while(temp != NULL) {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}