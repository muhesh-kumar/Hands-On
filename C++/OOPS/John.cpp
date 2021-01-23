#include "John.h"
#include <iostream>

using namespace std;

// this is where we build and define all functions and variables etc.

John :: John() {
    cout << "This is John!" << endl;
}

// :: is the binary scope resolution operator - says that the constructor John() is the memeber of the class John