#include <stdio.h>


int main() {

    int numbers[9];
    char letter[9];
    int points[6] = {0, 0, 1, 0, 0, 0};
    int point[] = {0, 0, 0, 1, 0, 0};

    // if the dimension is specified but not all elements in the array are initialized, the remaining elements will contain a value of 0. This is very useful, especially when we have very large arrays.
    int numbers[1000] = {212}; // sets the first value of the array to 212, and the rest to 0

//     The compiler may not complain about the following
// (though the best compilers do):
    char y;
    int z = 9;
    char point[6] = { 1, 2, 3, 4, 5, 6 };
    //examples of accessing outside the array. A compile error is not always raised
    y = point[15];
    y = point[-4];
    y = point[z];
// During program execution, an out of bounds array access does not always cause a run
// time error. Your program may happily continue after retrieving a value from point[-1]. To
// alleviate indexing problems, the sizeof() expression is commonly used when coding loops
// that process arrays.


    return 0;
}