#include <bits/stdc++.h>

using namespace std;

int main() {


    int arr[] = {11, 12, 13, 14, 15};
    int n = 5;
    int key; cin >> key;
    cout << "straight way: " << lower_bound(arr, arr + n, key) - arr + 1 << endl;
    cout << "back way: " << (arr + n) - lower_bound(arr, arr + n, key) << endl;

    return 0;
}