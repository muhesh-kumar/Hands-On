#include <iostream>
using namespace std;

// Class declaration
// class MyClass{
//     public:
//         void say() {
//             cout << "Hello there!";
//         }
// };


// MAKING CLASS VARIABLES PUBLIC IS GENERALLY NOT A GOOD PROGRAMMING PRACTICE! SO MAKE THEM PRIVATE!
// SO, we need public functions to access them in main function. setters and getters...


class A {
    public:
        void setName (string x) {
            name = x;
        }
        string getName () {
            return name;
        }
    private:
        string name;
};

int main() {

    // MyClass my_obj;
    // my_obj.say();

    //! This is a bad practice
    // A obj;
    // obj.name = "Josh";
    // cout << obj.name;

    // This is a good practice!
    A obj;
    obj.setName("Josh");
    cout << obj.getName();
    
    return 0;

}