#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<int> adj[], vector<bool> &visited) {

    visited[node] = true;

    for (int neighbor : adj[node]) {

        if (!visited[neighbor]) {
            if (dfs(neighbor, node, adj, visited))
                return true;
        }

        else if (neighbor != parent) {
            return true;
        }
    }
    return false;
}

int main() {

    int V, E;
    cout << "enter the number of vertices: " << endl;
    cin >> V;
    cout << "enter the number of edges: " << endl;
    cin >> E;

    vector<int> adj[V+1];
    vector<bool> visited(V+1, false);

    for (int i = 0; i <= E; i++)
    {
        int  u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= V; i++)
    {
        if(!visited[i]){
            if(dfs(i, -1, adj, visited)){
                cout << "cycle detected" << endl;
                return 0;
            }
        }
    }
    cout << "No Cycle Detected" << endl;
    return 0;
}