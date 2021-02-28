#include <iostream>

using namespace std;

struct User {
    string first_name;
    string last_name;
    string get_status() {
        return status;
    }
    private:
        // string status;
        string status = "Gold";
};

int main() {

    User user1;
    user1.first_name = "John";
    user1.last_name = "Watson";
    cout << user1.first_name << " " << user1.last_name << endl;
    // user1.status = "Gold"; can't access a private member

    cout << "His status is: " << user1.get_status() << endl;

    return 0;
}