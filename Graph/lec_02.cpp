#include <bits/stdc++.h>
using namespace std;

int main() {
    int V,E; //vertices and Edges
    cout << "number of vertices are: " << endl;
    cin >> V;
    cout << "number of edges are: " << endl;
    cin >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v; //u and v are two nodes connected by E
        cout << "nodes are connected by edge  " << i << endl;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //BFS
    vector<bool> visited(V,false);
    queue<int> q;
    vector<int> bfs;

    //start BFS from vertex 0
    q.push(0);
    visited[0] = true;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for (int neighbour : adj[node]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

    //printing bfs traversal
    for(int node : bfs) {
        cout << node << " ";
    }
    return 0;
    
}