#include<iostream>

using namespace std;


int main() {


    // To check if the bit at the index i(from the right) is set or not
    // int n, f, i; cin >> n >> i;
    
    // f = 1;
    // f = f << i;
    // bool ok = n & f;
    
    // if (ok) cout << i << "th bit is set";
    // else cout << i << "th bit is not set";    

    // Count the number of setbits in the binary representation of n

    int n; cin >> n;
    int cnt = 0;
    while (n > 0) { // i.e there is atleast one set bit
        if (n & 1) cnt++; // if the 0th bit is set, we'll increment the cnt
        n = n >> 1; // right shift it to one place...
    }
    cout << cnt << endl;
    // Time Complexity: O(logn)

    return 0;
}

// Note: a power of 2 only contains one set bit
// So, if we subtract one from a power of 2, all the bits which were 0 in the power of 2 becomes one here and vice versa..
// 0 1 0 0 0
// 0 0 0 0 1