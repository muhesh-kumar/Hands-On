#include <bits/stdc++.h>
using namespace std;

int main() {

    // n - no of rows of the given matrix
    // m - no of columns of the given matrix
    int n, m; cin >> n >> m;

    // Declaring and initializing a 2D Vector with 1 based indexing
    // (Use 1 based indexing for range query related problems)
    vector<vector<int>> v(n + 1, vector<int>(m + 1, 0));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
        }
    }
    
    // BRUTE FORCE APPROACH: O(Q * N * M)
    // int q; cin >> q;
    // while(q--) {
    //     int a, b, c, d;
    //     cin >> a >> b >> c >> d;
    //     long long sum = 0;
    //     for (int i = a; i <= c; i++) {
    //         for (int j = b; j <= d; j++) {
    //             sum += v[i][j];
    //         }
    //     }
    //     cout << sum << endl;
    // }

    // USING PREFIX SUM ALGORITHM: O(N * M)
    // Declaring a prefix sum array(or vector) with 1 based indexing, also with one more row
    // Creating a prefix sum vector of size + 1 (of the main vector created or given before) 
    // This is to minimize the handling of edge cases while constructing the prefix sum vector
    vector<vector<int>> pv(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j <= m; j++) {
            pv[i][j] = v[i][j] + pv[i - 1][j] + pv[i][j - 1] - pv[i - 1][j - 1];
        }
    }

    int q; cin >> q;
    while(q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // Answering the range sum queries in O(1) time
        int ans = pv[c][d] - pv[a - 1][d] - pv[c][b - 1] + pv[a - 1][b - 1]; 
        cout << ans << endl;        
    }

    return 0;
}