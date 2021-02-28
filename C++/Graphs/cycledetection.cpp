#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
vector<int> adj[N];
bool visited[N];

bool dfs(int node, int parent) {
    visited[node] = 1;
    for (int child: adj[node]) {
        if (!visited[child]) {
            if (dfs(child, node)) 
                return true;
        } else if (child != parent) // visited and child is not the parent , then there is a cycle
            return true;
    }
    return false;
}

int main() {

}