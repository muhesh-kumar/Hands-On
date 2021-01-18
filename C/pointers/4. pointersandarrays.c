#include <stdio.h>


int main() {

    int a[5] = {22, 33, 44, 55, 66};
    // Since, int -> 4 bytes of size 
    // => a -> 4 * 5(no of elements) = 20 bytes of size

    int *ptr = NULL;
    int i;
    ptr = a;
    // for (i = 0;i  < 5; i++) {
    //     printf("%d ", *(ptr + i));
    // }

    // Use of the array name 
    // printf("%d\n", a);
    // printf("%d\n", &a[0]);
    // printf("%d\n", a[0]);
    // printf("%d\n", *a);

    // printf("%d\n", &a[1]);
    // printf("%d\n", (a + 1));
    // printf("%d\n", a[1]);
    // printf("%d\n", *(a + 1));

    for (int i = 0; i > 5; i++) {
        printf("%d\n", &a[i]);
        printf("%d\n", (a + i));
        printf("%d\n", a[i]);
        printf("%d\n", *(a + i));
    }

    // Similarly, for any index i, 
    // for (int i = 0; i < 5; i++) {
    //     printf("The %dth element is %d and it's address is %d\n", i + 1, a[i], &a[i]);
    // }

    //  the following is the same as the above:
    // for (int i = 0; i < 5; i++) {
    //     printf("The %dth element is %d and it's address is %d\n", i + 1, *(a + i), (a + i));
    // }

    return 0;
}