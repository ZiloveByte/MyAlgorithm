#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define MAXV 100
int visited[MAXV];
struct MatGraph {
    int edges[MAXV][MAXV];
    int n, e;
};
void CreateGraph(MatGraph &g, int n, int e) {
    g.n = n; g.e = e;
    int edges[7][7] = {
        {0,1,0,1,0,0,0},
        {0,0,1,0,0,1,0},
        {0,0,0,0,0,0,0},
        {0,0,0,0,1,0,0},
        {0,0,0,0,0,0,1},
        {0,0,1,0,0,0,1},
        {0,0,0,0,0,0,0}
    };
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            g.edges[i][j] = edges[i][j];
}
void DFS(MatGraph g, int v) {
    visited[v] = 1;
    cout << v << " ";
    for (int i = 0; i < g.n; i++)
        if (g.edges[v][i] != 0 && visited[i] == 0) DFS(g, i);
}
void DFS_NonRecursive(MatGraph g, int v) {
    int vis[MAXV] = {0};
    stack<int> s;
    s.push(v);
    vis[v] = 1;
    cout << v << " ";
    while (!s.empty()) {
        int curr = s.top();
        int i;
        for (i = 0; i < g.n; i++) {
            if (g.edges[curr][i] != 0 && vis[i] == 0) {
                cout << i << " ";
                vis[i] = 1;
                s.push(i);
                break;
            }
        }
        if (i == g.n) s.pop();
    }
}
void BFS(MatGraph g, int v) {
    int vis[MAXV] = {0};
    queue<int> q;
    q.push(v);
    vis[v] = 1;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        cout << curr << " ";
        for (int i = 0; i < g.n; i++) {
            if (g.edges[curr][i] != 0 && vis[i] == 0) {
                vis[i] = 1;
                q.push(i);
            }
        }
    }
}
int main() {
    MatGraph g;
    CreateGraph(g, 7, 8);
    for(int i=0; i<MAXV; i++) visited[i] = 0;
    cout << "1) 深度优先遍历(递归): "; DFS(g, 0); cout << "\n";
    cout << "2) 深度优先遍历(非递归): "; DFS_NonRecursive(g, 0); cout << "\n";
    cout << "3) 广度优先遍历: "; BFS(g, 0); cout << "\n";
    return 0;
}