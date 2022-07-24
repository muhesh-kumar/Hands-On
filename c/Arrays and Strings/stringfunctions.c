#include <stdio.h>
#include <string.h>

// int main()
// {
//   char info[100];
//   char dept[ ] = "HR";
//   int emp = 75;
//   sprintf(info, "The %s dept has %d employees.", dept, emp);
//   printf("%s\n", info);

//   return 0;
// } 

// an easier way to convert a number to a string in C => using sprintf() function

int main() {

    char number[20];
    int n;
    scanf("%d", &n);
    sprintf(number, "%d", n);
    // printf("%s", number);
    printf("%ld", strlen(number));

    return 0;
}