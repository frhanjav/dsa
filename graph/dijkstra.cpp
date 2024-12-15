#include <bits/stdc++.h>
using namespace std;

// Dijkstra using set
class Solution
{
public:
	vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
	{
		set<pair<int, int>> st;
		vector<int> dist(V, 1e9);

		st.insert({0, S});
		dist[S] = 0;

		while (!st.empty())
		{
			auto it = *(st.begin());
			int node = it.second;
			int dis = it.first;
			st.erase(it);
			for (auto it : adj[node])
			{
				int adjNode = it[0];
				int edgW = it[1];

				if (dis + edgW < dist[adjNode])
				{
					if (dist[adjNode] != 1e9)
						st.erase({dist[adjNode], adjNode});
					dist[adjNode] = dis + edgW;
					st.insert({dist[adjNode], adjNode});
				}
			}
		}
		return dist;
	}
};

int main()
{
	int V, E, S;
	cout << "Enter the number of vertices (V): ";
	cin >> V;
	cout << "Enter the number of edges (E): ";
	cin >> E;
	cout << "Enter the source vertex (S): ";
	cin >> S;
	vector<vector<int>> adj[V];
	cout << "Enter the edges in the format (u v w) where u and v are vertices and w is the weight :\n";
	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back({v, w});
		adj[v].push_back({u, w});
	}
	Solution obj;
	vector<int> res = obj.dijkstra(V, adj, S);
	cout << "\nShortest distances from source vertex " << S << ":\n";
	cout << "Vertex\tDistance from Source\n";
	for (int i = 0; i < V; i++)
	{
		cout << i << "\t";
		if (res[i] == 1e9)
		{
			cout << "INF";
		}
		else
		{
			cout << res[i];
		}
		cout << endl;
	}
	return 0;
}