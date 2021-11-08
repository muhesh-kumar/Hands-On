#include <stdio.h>
#include <stdlib.h>

struct st {
    int data;
};


int main() {

    // operators in the same cluster have the same precedence and the order of evaluation is decided by the associativity (left-to-right or righ-or-left). Operators closer to the top have higher precedence than those in a subsequent group.

    // POSTFIX OPERATORS
    // () => funcion call operator
    printf("This is a function call\n");
    // [] => array index operator
    int arr[2] = {1, 2};
    printf("%d\n", arr[0]);
    // . => member access operator (for an object of struct / union type or a reference to it)
    struct st A;
    A.data = 1;
    // -> => member access operator for a pointer to an object of struct / union type
    // ptr->member

    // UNARY OPERATORS
    // ! => Logical not operator
    int not = !2;
    // ~ => Bitwise not operator
    int b_not = ~15;
    // + - => Unary plus / minus operators
    int a = +1 -2;
    printf("%d\n", a);
    // ++ -- => Post increment / decrement operators
    // ++ -- => pre increment / decrement operators
    // & => address-of operator
    // * => indirection operator
    // sizeof => sizeof operator for expressions
    // sizeof() => sizeof opeartor for types
    // (type) => cast operator

    // MULTIPLICATIVE OPERATORS
    // * / % => Multiplication, Division and modulus Operators

    // ADDITIVE OPERATORS
    // + - => Addition and subtraction operators

    // BITWISE SHIFT OPERATORS
    // << => left shift operartor
    // >> => right shift operator

    // RELATIONAL INEQUALITY OPERATORS
    // < > <= >= => less-than, greater-than, less-than or equal-to, greater-than or equal-to operators

    // RELATIONAL EQUALITY OPERATORS
    // == != equal-to, not-equal-to

    // BITWISE AND OPERATOR
    // &

    // BITWISE XOR OPERATOR
    // ^

    // BITWISE OR OPERATOR
    // |

    // LOGICAL OPERATORS
    // && - Logical AND operator
    // || - Logical OR operator
    
    // Conditional Operator
    // ?:

    // ASSIGNMENT OPERATORS
    // = => assignment operator
    // += -= *= /=     => Shorthand assignment operators
    // %= &= |= ^=        (foo op= bar represents)
    // <<= >>=            (foo = foo op bar)

    // COMMA OPERAOTR
    // ,

    return 0;
}