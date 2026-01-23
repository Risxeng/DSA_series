#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " " ;
    for (int neighbor: adj[node])
    {
        if(!visited[neighbor]) {
            dfs(neighbor, adj,visited);
        }
    }
    
}

int main() {

    int V,E;
    cout << "enter the no of vertices: " << endl;
    cin >> V;
    cout << "enter the no of edges: " << endl;
    cin >> E;

    vector<vector<int>> adj(V);
    vector<vector<int>> GRAPH(E, vector<int>(2));

    for (int i = 0; i < E; i++)
    {
        int u = GRAPH[i][0];
        int v = GRAPH[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);

    for (int i = 0; i < V; i++)
    {
        if(!visited[i]) {
            dfs(i, adj, visited);
        }
    }
    return 0;
}