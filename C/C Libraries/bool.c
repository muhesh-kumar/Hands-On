#include <stdio.h>
#include <stdbool.h> // helps us use 'bool' instead of '_Bool'

int main() {
    bool is_there = true;
    if (is_there) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}