#include <iostream>

using namespace std;

class User {

    static int user_count; // we can't initialize it inside the class but we should do this outside the class
    string status = "Gold";

    public:
        string first_name;
        string last_name;

        static int get_user_count() {
            return user_count;
            // return first_name; doesn't work because we can only access a static data members inside a static method
        }   

        string get_status() {
            return status;
        }
        void set_status(string status) {
            if (status == "Gold" || status == "Silver" || status == "Bronze") {
                this->status = status;
            } else {
                this->status = "No status";
            }
        }
        
        User() {
            cout << "Object is created without arguments!" << endl;
            user_count++;
        }
        User(string first_name, string last_name, string status = "Gold") {
            cout << "Object is created with arguments!" << endl;
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++;
        }
        ~User() {
            cout << "Desctructor is called!" << endl;
            user_count--;
        }

};

int User::user_count = 0; // initialzing the static data member of the class outside the class


int main() {

    User user1;
    cout << User::get_user_count() << endl;

    User user2;
    cout << User::get_user_count() << endl;
    
    User user3;
    cout << User::get_user_count() << endl;

    user1.~User(); // calling the destructor to destroy the user1 object
    cout << "After destructor is called: ";
    cout << User::get_user_count() << endl;
    
    return 0;
}

// we can keep track of the number of objects using a static data member..