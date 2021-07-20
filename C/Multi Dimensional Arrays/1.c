#include <stdio.h>

void sum(int n, int a[][n], int b[][n]) {
    int c[n][n];
    for (int i =  0 ; i < n; i++) {
        for (int j = 0 ;j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

// if both the row number and column number are being passed, they should be passed before 
// passing the matrices themselves, like this:
// void (int n, int m, int m1[n][m], int m2[n][m]);

int main() {

    int n; scanf("%d", &n);
    int m1[n][n], m2[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    for (int i = 0;i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    sum(n, m1, m2);

    // we can also pass both the row number and col number as arguments
    // sum(n, m, m1, m2)
    
    return 0;
}