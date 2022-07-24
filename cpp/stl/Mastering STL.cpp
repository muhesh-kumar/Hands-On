#include <iostream>
#include <vector> 

using namespace std;


int main() {

    int n; cin >> n;
    int arr[n]; // initializes the array with garbage values
    int *barr[n] = new int[n](); // initializes the array with zeros.
    
    int n; cin >> n;
    vector<int> v(n, 0); // Creates a vector v of int data type and of size n initialized with n 0s...
    // for (auto i: v) cout << i << " ";


    // Differnece vector trick: Implementation:
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        v[l]++;
        if (r+1 < n) {
            v[r+1]--;
        }
    }
    // now finding the cumulative sum / prefix sum array(in place - meaning we don't create a new vector)
    for (int i = 1; i < n; i++) {
        v[i] += v[i-1];
    }
    for (auto i: v) cout << i << " ";

   return 0;
}