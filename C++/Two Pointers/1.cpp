#include <bits/stdc++.h>
using namespace std;


int main(){ 

    int n, m; cin >> n >> m;
    vector<int> a(n), b(m), c;
    for (auto &i : a) cin >> i;
    for (auto &i : b) cin >> i;
    int aptr =0, bptr = 0;
    while(aptr < n || bptr < m) {
        if (bptr >= m || (aptr < n && a[aptr] < b[bptr])) {
            c.push_back(a[aptr]);
            aptr++;
        } else {
            c.push_back(b[bptr]);
            bptr++;
        }
    }
    for (auto &i: c) cout << i << " ";

    return 0;
}