#include <iostream>

using namespace std;

class User {

    string status = "Gold"; // this is private by default
    public:
        string first_name;
        string last_name;
        string get_status() {
            return status;
        }

        // CONSTRUCTOR:
        User() { // this is a default constructor
            cout << "Object is created without arguments!" << endl;
        }
        User(string first_name, string last_name, string status = "Gold") { // this is the custom constructor we create usually to initialize the data members of the class
            cout << "Object is created with arguments!" << endl;
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        // DESCTRUCTOR:
        ~User() {
            cout << "Desctructor is called!" << endl;
        }

};


int main() {

    User user1; // if we define only one custom constructor with some arguments and use this line, it will give an erorr because the default constructor won't be created automatically if we ourself create a custom constructor with / without arguments. Therefore inorder to use this line, we need to create a custom constructor without argument
    
    User user2("John", "Watson"); // in order to use this line we need to create a constructor with arguments
    cout << user2.first_name << " " << user2.last_name << endl;
    cout << "Status of user2: " << user2.get_status() << endl;
    
    User user3("John", "Watson", "Silver");
    cout << user3.first_name << " " << user3.last_name << endl;
    cout << "Status of user3: " << user3.get_status() << endl;

    return 0;
}