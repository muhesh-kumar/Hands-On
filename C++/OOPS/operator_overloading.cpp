#include <iostream>

using namespace std;

class Position {
    public:
        int x = 10;
        int y = 20;

        // Overloading the + operator for Position objects
        Position operator + (Position pos) {
            Position new_pos;
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Position pos) {
            if (x == pos.x && y == pos.y) {
                return true;
            }
            return false;
        }

};


// Overloading insertion and extraction operators:
ostream& operator << (ostream& output, Position pos) {
        output << "(" << pos.x << "," << pos.y << ")";
        return output;
}

istream& operator >> (istream& input, Position &pos) {
    input >> pos.x >> pos.y;
    return input;
}
// we can't access the private stuff when overloading...

int main() {

    Position pos1, pos2;
    Position pos3 = pos1 + pos2;

    cout << pos3.x  << " " << pos3.y << endl;  
    if (pos1 == pos2) {
        cout << "They are the same!" << endl;
    } else cout << "They are different!" << endl;

    cout << pos3 << endl;

    Position pos4;
    cin >> pos4;
    cout << pos4 << endl;

    return 0;
}

// Operator overloading: Defining the behaviour of C++ Operators when used with the custom types (with Objects or structs)
// SYNTAX: operator + (custom_type var, custom_type var2) {
    // code.....

// }
