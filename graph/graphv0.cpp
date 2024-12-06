#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // vector<int> adj[n+1];
    vector<pair<int, int>> adj[n + 1]; // Adjacency list with weights
    for (int i = 0; i <m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        // adj[u].push_back(v);
        adj[u].push_back({v, w});
        // adj[v].push_back(u);
        adj[v].push_back({u, w}); // Store u and weight w (undirected graph)
    }
    
    // Printing the adjacency list with weights
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << ": ";
        for (auto neighbor : adj[i]) // auto allows the compiler to deduce the type of it automatically
        {
            cout << "( " << neighbor.first << ", " << neighbor.second << " ) ";
        }
        cout << endl;
    }
    
    return 0;
}