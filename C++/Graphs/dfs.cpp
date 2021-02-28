#include <bits/stdc++.h>

using namespace std;

// build graph snippet
const int N = 1e5 + 10;
vi adj[N];
bool visited[N];
int dist[N];
queue<int> q;

void dfs(int node) {
    visited[node] = 1;
    trav(child, adj[node]) {
        if (!visited[child]) {
            dfs(child);
        }
    }
}

int main (){
    return 0;
}