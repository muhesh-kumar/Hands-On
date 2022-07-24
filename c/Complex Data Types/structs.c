#include <stdio.h>

struct Account {
    char name[100];
    int acc_no;
    int balance;
};

// . operator is used to access the struct members 

// Shorthand to avoid typing 'struct' everytime
typedef struct {
    int length;
    int width;
} rectangle;

typedef struct {
    rectangle rectangle;
    struct Account acc;
} card;

int main() {

    // struct Account A;
    // A.acc_no = 1991;
    // A.balance = 1000;
    // scanf("%s", &A.name);
    // printf("%d %d %s", A.acc_no, A.balance, A.name);

    // rectangle a;
    
    // Initialization of struct of structs
    card c;
    c.acc.balance = 1000;
    c.rectangle.length = 12;

}