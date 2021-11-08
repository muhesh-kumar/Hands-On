#include <stdio.h>

int main() {


    // syntax:
    // FILE *fp;
    // fp = fopen("filename", "mode");

    // CREATNG FILES
    // FILE *fp; // data type FILE
    // fp = fopen("test.txt", "w");
    // fprintf(fp, "Hello world!");
    // fclose(fp);

    FILE *fp;
    char c;
    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("File doesn't exist");
    } else {
        while (c != EOF) {
            c = getc(fp);
            putchar(c);
        }
        fclose(fp);
    }

    return 0;
}