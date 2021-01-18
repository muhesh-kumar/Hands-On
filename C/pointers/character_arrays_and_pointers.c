#include <stdio.h>
#include <string.h>

void printstr(char *c);

int main() {

    char c1[] = "ABC"; // size of c1 should be 4 (becase c1 is represented as 'ABC\0')
    char c2[20] = "ABC";
    char c3[3] = "ABC";
    char c4[4] = {'A', 'B', 'C', '\0'};
    char *c5; c5 = c1; // these(character pointers) are immutalbe
    // c1[i] is same as *(c5 + i) for a character pointer like c5
    // c5 = c1; is correct, whereas c1 = c5;c1 = c1 + 1; c2++ are not correct


    char c[8];
    printf("c1 is %s\n", c1);

    c[0] = 'X'; c[1] = 'Y'; c[2] = 'Z';
    printf("Before null terminating c,: %s\n", c);
    c[3] = '\0';
    printf("After null terminating c: %s\n", c);
    int len = strlen(c);
    printf("Length = %d\n", len);

    return 0;

}


void printstr(char *c) {
    while(*c != '\0') {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

// NOTE:
// How to store strings: => size of array >= no of characters in string + 1
// A String in C has to be null terminated
// arrays and pointers are different types that are used in similar manner
// character arrays are mutable
// character pointers are immutable