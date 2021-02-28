#include <bits/stdc++.h>

using namespace std;

int main() {
    // No of nodes = n, no of edges = m

    int n, m; cin >> n >> m;
    vector<vector<int> > adj(n + 1);
    while(m--) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
}