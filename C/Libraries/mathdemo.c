#include <stdio.h>
#include <math.h>

int main() {

    // Power functions:
    // 1. pow() takes doubles as arguments and returns a double
    printf("2 ^ 5 = %f\n", pow(2, 5));
    printf("2 ^ 5 = %lf\n", pow(2, 5));
    printf("2 ^ 5 = %d\n", (int) pow(2, 5));

    // 2. sqrt() takes a non negative doulbe as an argument and returns a doulbe
    printf("Square root of 25 is %f\n", sqrt(25));
    printf("Square root of 25 is %lf\n", sqrt(25));
    printf("Square root of 25 is %d\n", (int) sqrt(25));

    // 3. cbrt() takes a double as argument and returns a doulbe
    printf("Cube root of 64 is %f\n", cbrt(64));
    printf("Cube root of 64 is %lf\n", cbrt(64));
    printf("Cube root of 64 is %d\n", (int) cbrt(64));

    // 4. hypot() takes doubles as arguments and returns a double
    printf("The hypotenuse of a right traingle with base %d and %d is %f\n", 3, 4, hypot(3, 4));
    printf("The hypotenuse of a right traingle with base %d and %d is %d\n", 3, 4, (int) hypot(3, 4));

    return 0;
}