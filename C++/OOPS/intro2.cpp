#include <iostream>
#include <string.h>

using namespace std;

class User {

    string status = "Gold"; // this is private by default
    public:
        string first_name;
        string last_name;
        string get_status() {
            return status;
        }

};


int main () {

    User me;
    me.first_name = "Muhesh";
    me.last_name = "Kumar";
    cout << me.get_status() << endl;

    return 0;
}


// Class and a struct is very similar, we just need to add the public access modifier in the new class we are creating now...(to those data members which are public by default in our struct)

// And move all the private data members and methods to the top of the class and keep it above the public data members and methods

// So, anything which was explicitly private in a struct can be let as it is in a class without an access modifier and anything which was implicitly public in a struct must be explicitly added a public access modifier in a class. This is the main difference between struct and a class and this is how we morph a struct into a class