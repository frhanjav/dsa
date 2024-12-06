#include <bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
	int vis[V];
	vis[V] = {0};
	vis[1] = 1;
	queue<int> q;
	q.push(1);
	vector<int> bfs;
	while (!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);

		for (auto it : adj[node])
		{
			if (!vis[it])
			{
				vis[it] = 1;
				q.push(it);
			}
		}
	}
	return bfs;
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> adj[n + 1];
	// vector<pair<int, int>> adj[n + 1]; // Adjacency list with weights
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		// adj[u].push_back({v, w});
		adj[v].push_back(u);
		// adj[v].push_back({u, w}); // Store u and weight w (undirected graph)
	}

	// Printing the adjacency list with weights
	for (int i = 1; i <= n; i++)
	{
		cout << "Node " << i << ": ";
		for (auto neighbor : adj[i]) // auto allows the compiler to deduce the type of it automatically
		{
			cout << neighbor << " ";
		}
		cout << endl;
	}

	vector<int> result = bfsOfGraph(n + 1, adj);
	for (int node : result)
	{
		cout << node << " ";
	}
	cout << endl;
	return 0;
}