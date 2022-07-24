#include <stdio.h>

struct MyStruct {
    int m_aNumber;
    float num2;
};


static struct MyStruct val1, val2, val3, val4;
struct MyStruct *ASillyFunction( int b )
{
    struct MyStruct *myReturn;
    if (b == 1) myReturn = &val1;
    else if (b==2) myReturn = &val2;
    else if (b==3) myReturn = &val3;
    else myReturn = &val4;
    return myReturn;
}


int main() {

    // Pointers can reference any data type, even functions


    // DECLARING POINTERS:
    int *pJ2;
    struct MyStruct *pAnItem;

    //     Lines 1-4 define a structure3
    // . Line 8 declares a variable which points to an int, and line
    // 9 declares a variable which points to something with structure MyStruct. So to declare
    // a variable as something which points to some type, rather than contains some type, the
    // asterisk (*) is placed before the variable name.
    // In the following, line 1 declares var1 as a pointer to a long and var2 as a long and not a
    // pointer to a long. In line 2, p3 is declared as a pointer to a pointer to an int.

    long * var1, var2;
    int ** p3;

    // Pointer types are often used as parameters to function calls
    //      Since C passes function arguments
    // by value, in order to allow a function to modify a value from the calling routine, a pointer to
    // the value must be passed. Pointers to structures are also used as function arguments even
    // when nothing in the struct will be modified in the function. This is done to avoid copying
    // the complete contents of the structure onto the stack.



    /* -------------ASSIGNING VALUES TO POINTERS--------*/

    //     To assign the address of a variable to a pointer, the & or 'address of' operator is
    // used.

    int myInt;
    int *pPointer;
    struct MyStruct dvorak;
    struct MyStruct *pKeyboard;

    pPointer = &myInt;
    pKeyboard = &dvorak;

    pKeyboard = malloc(sizeof *pKeyboard); // Pointers can also be assigned to reference dynamically allocated memory. The malloc() and calloc() functions are often used to do this

    struct MyStruct *strPointer;
    int *c, *d;
    int j;
    c = &j;
    d = c;
    strPointer = ASillyFunction(3);

    //     When returning a pointer from a function, do not return a pointer that points to a value
    // that is local to the function or that is a pointer to a function argument. Pointers to local
    // variables become invalid when the function exits. In the above function, the value returned
    // points to a static variable. Returning a pointer to dynamically allocated memory is also
    // valid.


    /* -----------------------------DEREFERENCING POINTERS---------------------------------------*/

    //     To access a value to which a pointer points, the * operator is used. Another operator, the
    // -> operator is used in conjunction with pointers to structures.


    int c, d;
    int *pj;
    struct MyStruct astruct;
    struct MyStruct *bb;

    c = 10;
    pj = &c; /* pj points to c */
    d = *pj; /* d is assigned the value to which pj points, 10 */
    pj = &d; /* now points to d */
    *pj = 12; /* d is now 12 */
    
    bb = &astruct;  
    (*bb).m_aNumber = 3; /* assigns 3 to the m_aNumber member of astruct */
    bb->num2 = 44.3; /* assigns 44.3 to the num2 member of astruct */
    *pj = bb->m_aNumber; /* eqivalent to d = astruct.m_aNumber; */

    // The expression bb->m_aNumber is entirely equivalent to (*bb).m_aNumber. They both access the m_aNumber element of the structure pointed to by bb
    // You can assign a value to a void pointer, but you must cast the variable to point to some specified type before you can dereference it. Pointer arithmetic is also not valid with void * pointers.


    return 0;
}