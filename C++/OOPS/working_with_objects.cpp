#include <iostream>
#include <vector>

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


bool add_user_if_not_exists(vector<User>& users, User user) {
    for (auto &i : users) {
        if (i.first_name == user.first_name && i.last_name == user.last_name) {
            return true;
        }
    }
    return false;
}

int main() {

    User user;
    user.first_name = "Muhesh";

    vector<User> users;
    users.push_back(user);
    users.push_back(User()); // pushes a user with empty first name into users vector.
    // for (auto& user : users) {
    //     cout << user.first_name << endl;
    // }
    User user1, user2, user3;
    
    user1.first_name = "John";
    user1.last_name = "Watson";
    user2.first_name = "Jake";
    user2.last_name = "Watson";
    user3.first_name = "Jim";
    user3.last_name = "Watson";
    
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    if (add_user_if_not_exists(users, user1)) {
        cout << "User already exits!" << endl;
    } else cout << "User doesn't already exists!" << endl;

    return 0;
}