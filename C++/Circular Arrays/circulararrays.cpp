 
// Author: Muhesh Kumar
 
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pb push_back
#define nl '\n'
 
int main() {
 
    int arr[] = {11, 12, 13, 14, 15, 16, 17};
    // normal traversal (we need to print all the elements starting from index 0)
    for (auto i: arr) cout << i << " " << nl;

    // circular traversal (we need to print all the elements starting from index i)
    int n; cin >> n;
    for (int i = n; i < n + 7; i++) {
        cout << arr[i%7] << " ";
    }
    cout << nl;
    
    return 0;
}