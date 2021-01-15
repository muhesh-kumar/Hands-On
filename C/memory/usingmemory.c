#include <stdio.h>

void test(int k);

int main () {

    int num, i = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", num);

    printf("The address of num is %x\n", &num);
    test(i);
    printf("The address of num is %x\n", &num);
    test(i);
    

    return 0;
}

void test(int k) {
    printf("The address of k is %x\n", &k);
}