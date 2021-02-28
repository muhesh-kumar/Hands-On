#include <bits/stdc++.h>
using namespace std;


const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];
int in[N], out[N];

int t = 1;
void dfs(int node) {
    visited[node] = 1;
    in[node] = t++;
    for (int child: adj[node]) {
        if (!visited[child])
            dfs(child);
    }
    out[node] = t++;
}

int main() {

    return 0;
}