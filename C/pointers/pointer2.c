// DOUBLE POINTERS:

#include<stdio.h>

int main() {

    // int x = 12;
    // int *p = NULL;
    // int **ptr = NULL;
    // p = &x;
    // ptr = &p;

    // MULTIPLE POINTERS:
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q)); // same as **q
    printf("%d\n", *(*(r))); // same as **r
    printf("%d\n", *(*(*r))); // same as ***r

    ***r = 10;
    printf("%d\n", x);
    **q = *p + 2;
    printf("x = %d\n", x);

    return 0;
}