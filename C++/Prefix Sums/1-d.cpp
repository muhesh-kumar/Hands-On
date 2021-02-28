#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    // Computing the cumulative sum in-place:
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    // for (int i = 1; i <= n; i++) {
    //     v[i] += v[i - 1];
    // }

    // Computing the prefix sum using an auxiliary data structure(Prefix sum vector)
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> pv(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pv[i] = pv[i - 1] + v[i];
    }

    return 0;
}