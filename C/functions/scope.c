#include<stdio.h>

int global1 = 4;

int main () {

    int local1, local2;

    local1 = 3;
    local2 = 4;
    global1 += local1 + local2;
    printf("%d \n", global1); // 11

    return 0;
}