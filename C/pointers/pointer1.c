#include <stdio.h>

int main(){ 

    // POINTERS: 
    // Syntax: 
    int *x; // or int* x;
    int *P; // pointer to integer
    char *c; // pointer to character
    double *d; // pointer to double

    // EXAMPLE:
    int j = 63;
    int *p = NULL;

    p = &j;
    printf("The address of j is %x\n", &j);
    printf("p contains the address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p); // *p or (*p) => dereferencing
    
    *p = 4;
    printf("----------\n");

    printf("The address of j is %x\n", &j);
    printf("p contains the address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);

    j++;
    printf("----------\n");

    printf("The address of j is %x\n", &j);
    printf("p contains the address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);    

    return 0;
}