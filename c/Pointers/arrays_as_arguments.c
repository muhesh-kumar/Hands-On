#include<stdio.h>

int sum_of_ele(int a[], int size); // int *a or int a[], both are same
void twice(int *a, int size);


int main() {

    int a[] = {1, 2, 3, 4, 5};
    int size= sizeof(a) / sizeof(a[0]);
    int total = sum_of_ele(a, size);
    printf("Sum: %d\n", total);
    printf("Array after changes: \n");
    twice(a, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

}

int sum_of_ele(int a[], int size) {
    int siz = sizeof(a)/sizeof(a[0]); // this won't give the array's size if we try to write this inside a function.
    // so, write the above line in the main function. or as always pass the size as another argument.
    // warning: 'sizeof' on array function parameter 'a' will return size of 'int *' 
    // => this will be thrown on writing the above line of code.

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

void twice(int *a, int size) {
    for (int i = 0 ;i < size; i++) {
        *(a + i) *= 2;
    }
}

// NOTE:
// When passing arrays to functions, pass their size too as another argument
// Arrays are passed by reference by default, so be aware of the fact that one can change the values of the passed array inside a funciton.
// so, if we don't want that to happen, we can declare the parameters as const int *a or as const int a[] to avoid changing the array values.
