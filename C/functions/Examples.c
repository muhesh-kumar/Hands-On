#include <stdio.h>

void print_squares(void) {
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i * i);
    }
}

int square(int x) {
    return x * x;
}

void say_hello(int number_of_times) {
    for (int i = 0; i < number_of_times; i++) {
        printf("Hello!\n");
    }
}

void infinite_recursion() {
    printf("Infinite Loop!\n");
    infinite_recursion();
}

// static functions - When a function is declared static, the compiler will now compile to an object file in a way that prevents the function from being called from code in other files
static int compare(int a, int b) {
    return (a + 4 < b) ? a : b;
}

int main(void) {

    print_squares();
    print_squares();
    say_hello(5);
    // infinite_recursion(); // don't run this
    int square_of_2 = square(2);

    return 0;
}