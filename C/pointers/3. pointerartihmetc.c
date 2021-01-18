#include <stdio.h>

int main() {

    int x = 5;
    int y;
    int *p = NULL;
    p = &x;

    // POINTER ARITHMETIC:
    printf("%d\n", p); // let p = x;
    printf("%d\n", p + 1); // then p + n will be x + n * sizeof(data_type of p)
    char ch = 'A';
    char *cp = &ch;
    printf("%d\n", cp);
    printf("%d\n", cp + 1);
    printf("%d\n", *(cp + 5));
    // *(cp + 1) = 'b';

    y = *p + 2; // y is assigned 7
    y += *p; // y is assigned 12
    *p = y; // x is assigned y which is 12
    (*p)++; // x is incremented to 13

    printf("p is pointing to the value %d\n", *p);

    // TYPECASTING:
    char *p0;
    p0 = (char*)p; //typecasting
    printf("Address = %d, value = %d\n", p0, *p0);
    
}