// DOUBLE POINTERS:

#include<stdio.h>

int main() {

    int x = 12;
    int *p = NULL;
    int **ptr = NULL;
    p = &x;
    ptr = &p;

    return 0;
}