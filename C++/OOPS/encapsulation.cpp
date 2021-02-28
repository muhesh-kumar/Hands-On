#include <iostream>

using namespace std;

class User {

    string status = "Gold"; // this is private by default
    // string _status = "Gold"; we can prefix the variable name of a private data member with an underscore.
    public:
        string first_name;
        string last_name;
        
        string get_status() {
            return status;
        }
        void set_status(string status) {
            if (status == "Gold" || status == "Silver" || status == "Bronze") {
                this->status = status;
            } else {
                this->status = "No status";
            }
            // this is how we can control the access of a private data member using getters and setters to enfore the extra layer of protection to our private data members
        }
        
        User() {
            cout << "Object is created without arguments!" << endl;
        }
        User(string first_name, string last_name, string status = "Gold") {
            cout << "Object is created with arguments!" << endl;
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User() {
            cout << "Desctructor is called!" << endl;
        }

};


int main() {


    return 0;
}


// getters and setters are how we implement encapsulation in C++
// they are just as similar to the normal functions
// recall that the methods that are defined inside a class can access the private and protected data members of that class. So, getters and setters are just taking advantage of this feature.