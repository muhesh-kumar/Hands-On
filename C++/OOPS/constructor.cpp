#include<iostream>

using namespace std;

class A {
    public:
        // A() {
        //    cout << "Constructor is created!" << endl; 
        // }
        A (string a) {
            setName(a);
        }

        // DESTUCTOR:
        // ~ A() {
        //     cout << "The ojbect is destroyed!" << endl;
        // }

        void setName(string x) {
            name = x;
        }
        
        string getName() {
            return name;
        }

        void printHello() {
            cout << "Hello" << endl;
        }
    private:
        string name; 
};


int main() {

    A obj("Josh");
    cout << obj.getName() << endl;

    A john("John");
    cout << john.getName() << endl;

    A josh("Josh"), mike("Mike");
    cout << josh.getName() << " " << mike.getName() << endl;

    return 0;
}

// constructors don't return!
// their name is same as the class name
// They are created to initialzie class variables
// the default constructor is the one without any parameters...and does the bare minimum job.
// destuctors are called when the objects are destroyed.
// we don't need to worry about destructors..