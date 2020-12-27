#include <stdio.h>

int main() {

    // printf() example
    // printf ("Characters: %c %c \n", 'a', 65);
    // printf ("Decimals: %d %ld\n", 1977, 650000L);
    // printf ("Preceding with blanks: %10d \n", 1977);
    // printf ("Preceding with zeros: %010d \n", 1977);
    // printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
    // printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
    // printf ("Width trick: %*d \n", 5, 10);
    // printf ("%s \n", "A string");
    
    // scanf() examples
    // char str [80];
    // int i;

    // printf ("Enter your family name: ");
    // scanf ("%79s",str);  
    // printf ("Enter your age: ");
    // scanf ("%d",&i);
    // printf ("Mr. %s , %d years old.\n",str,i);
    // printf ("Enter a hexadecimal number: ");
    // scanf ("%x",&i);
    // printf ("You have entered %#x (%d).\n",i,i);


    // getchar() and putchar() examples
    char ch;
    ch = getchar();
    putchar(ch);
    
    return 0;
}