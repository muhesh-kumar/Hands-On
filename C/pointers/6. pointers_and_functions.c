#include <stdio.h>

void f(int a);
void g(int *a);
void swap(int *num1, int *num2);

int main() {

    int n = 3; 
    int *pn = &n;
    printf("address of %d is %d\n", n, &n); // same as passing pn as the third argument to printf

    // CALL BY VALUE EXAMPLE:
    f(n);

    // CALL BY REFERENCE EXAMPLE:
    g(&n); // same as g(pn);

    int x = 25;
    int y = 100;

    printf("Before swapping, x is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("After swapping, x is %d, y is %d\n", x, y);

    return 0;
}



void f(int a) {
    printf("addres of %d is %d\n", a, &a);
}

void g(int *a) {
    printf("adddress of %d is %d\n", *a, a);
}

void swap(int *num1, int *num2) {

    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

}