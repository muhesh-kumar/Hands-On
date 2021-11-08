#include <iostream>

using namespace std;

class Position {
    int mag = 100;
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

        friend void output_status(Position pos);

        // we can also overload a operator as a friend function        
        friend ostream& operator << (ostream& output, Position pos);
        friend istream& operator >> (istream& input, Position &pos);


};

// friend functions are used to access the private data members of a class outside of the class.
void output_status(Position pos) {
    cout << pos.mag;
}

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

    Position pos4;
    cin >> pos4;
    cout << pos4 << endl;
    output_status(pos4);

    return 0;
}
