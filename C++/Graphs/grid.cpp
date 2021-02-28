#include <bits/stdc++.h>
using namespace std;


const int N = 1e3 + 10;
int grid[N][N]
bool visited[N][N];
int dist[N][N];
queue<pi> q;


// someone's dir arrays
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, -1, 1, -1, 1};

// own dir arrays(based on clockwise rotation starting from the topmost cell)
// for left, right, down and up, use the first 4 elements.
// for corner coordinates use the last 4
// for both corners and other coordinates, use all the 8 elements
int dx[] = {-1, 0, 1, 0, -1, 1, 1, -1};
int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};


bool is_valid(int x, int y, int n, int m) {
    if (x < 0 || y < 0 || x >= n || y >= m) return false;
    if (visited[x][y]) return false;
    return true;
}


void dfs(int x, int y, int n, int m) {
    visited[x][y] = 1;
    rep(i, 0, 4) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_valid(nx, ny, n, m)) {
            dfs(nx, ny, n, m);
        }
    }
}


void bfs(int x, int y, int n, int m) {
    visited[x][y] = 1;    
    q.push({x, y});
    while (!q.empty()) {
        int cx = q.ft.fr;
        int cy = q.ft.sc;
        q.pop();
        rep(i, 0, 4) {
	        int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (is_valid(nx, ny, n, m)) {
                visited[nx][ny] = 1;
                // dist[nx][ny] = dist[cx][cx] + 1;
                q.push({nx, ny});
            }
        }
    }
}


int main() {

    int n, m; cin >> n >> m;
    bfs(3, 3, n, m);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) cout << dist[i][j] << " ";
        cout << endl;
    }

    return 0;
}