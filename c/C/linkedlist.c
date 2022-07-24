#include <stdio.h>

typedef struct {
    int data;
    Node *link; // in C++ we can write this line as: Node* link;
} Node;



int main() {

    Node *A;
    A = NULL;
    Node *temp = (Node*) (malloc(sizeof(Node)));
    // Node *temp = new Node(); in C++
    // (*temp).data = 2;
    // (*temp).link = NULL;
    temp->data = 2;
    temp->link = NULL;
    A = temp;


    return 0;
}