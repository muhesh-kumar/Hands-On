#include <bits/stdc++.h>
using namespace std;

int n; //number of nodes
int source; // source vertex

vector<vector<int>> adj;
vector<bool> visited(n);
int dist[n], parents[n];
queue<int> q;

void bfs(int node){
    visited[node] = 1;
    q.push(node);
    // parents[node] = -1;
    while (!q.empty()) {
        int parent = q.front();
        q.pop();
        trav(child, adj[node]) {
            if (!visited[child]) {
                visited[child] = 1;
                q.push(child);
                // dist[child] = dist[parent] + 1;
                // parents[child] = parent;
            }
        }
    }
}

int main() {



    return 0;
}