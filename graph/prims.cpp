#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	int spanningTree(int V, vector<vector<int>> adj[])
	{
		priority_queue<pair<int, pair<int, int>>,
					   vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>>
			pq;
		vector<int> visited(V, 0);
		pq.push({0, {0, -1}}); // {weight, {current_node, parent_node}}
		int totalWeight = 0;
		vector<pair<int, int>> mstEdges; // Stores the edges in the MST
		while (!pq.empty())
		{
			auto [weight, nodes] = pq.top();
			pq.pop();
			int node = nodes.first;
			int parent = nodes.second;
			if (visited[node])
				continue;
			visited[node] = 1;
			totalWeight += weight;
			if (parent != -1)
			{
				mstEdges.push_back({parent, node});
			}
			for (auto edge : adj[node])
			{
				int adjacentNode = edge[0];
				int edgeWeight = edge[1];
				if (!visited[adjacentNode])
				{
					pq.push({edgeWeight, {adjacentNode, node}});
				}
			}
		}
		// Print the MST edges
		cout << "Edges in the Minimum Spanning Tree:\n";
		for (auto [u, v] : mstEdges)
		{
			cout << u << " - " << v << endl;
		}
		return totalWeight;
	}
};

int main()
{
	int V, E;
	cout << "Enter the number of vertices: ";
	cin >> V;
	cout << "Enter the number of edges: ";
	cin >> E;
	vector<vector<int>> edges(E, vector<int>(3));
	cout << "Enter the edges in the format [source destination weight]:\n";
	for (int i = 0; i < E; i++)
	{
		cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
	}
	vector<vector<int>> adj[V];
	for (auto edge : edges)
	{
		adj[edge[0]].push_back({edge[1], edge[2]});
		adj[edge[1]].push_back({edge[0], edge[2]});
	}
	Solution obj;
	int totalWeight = obj.spanningTree(V, adj);
	cout << "The sum of all the edge weights in the Minimum Spanning Tree : " << totalWeight << endl;
	return 0;
}