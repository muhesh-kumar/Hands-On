#include <iostream>

namespace muhesh {
    void say_hello() {
        std::cout << "Hello" << std::endl;
    }
}

using namespace muhesh;

int main () {

    // std::cout << "Hello world!";
    // muhesh::say_hello();

    for (int i = 0; i < 5; i++) {
        // muhesh::say_hello(); // without adding the line "using namespace muhesh"
        say_hello();
    }

    return 0;
}