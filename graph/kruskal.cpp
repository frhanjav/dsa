#include <bits/stdc++.h>
using namespace std;
class DisjointSet
{
	vector<int> rank, parent, size;

public:
	DisjointSet(int n)
	{
		rank.resize(n + 1, 0);
		parent.resize(n + 1);
		size.resize(n + 1);
		for (int i = 0; i <= n; i++)
		{
			parent[i] = i;
			size[i] = 1;
		}
	}
	int findUPar(int node)
	{
		if (node == parent[node])
			return node;
		return parent[node] = findUPar(parent[node]);
	}
	void unionBySize(int u, int v)
	{
		int ulp_u = findUPar(u);
		int ulp_v = findUPar(v);
		if (ulp_u == ulp_v)
			return;
		if (size[ulp_u] < size[ulp_v])
		{
			parent[ulp_u] = ulp_v;
			size[ulp_v] += size[ulp_u];
		}
		else
		{
			parent[ulp_v] = ulp_u;
			size[ulp_u] += size[ulp_v];
		}
	}
};
class Solution
{
public:
	int spanningTree(int V, vector<vector<int>> adj[])
	{
		vector<pair<int, pair<int, int>>> edges;
		for (int i = 0; i < V; i++)
		{
			for (auto it : adj[i])
			{
				int adjNode = it[0];
				int wt = it[1];
				int node = i;
				edges.push_back({wt, {node, adjNode}});
			}
		}

		sort(edges.begin(), edges.end());
		DisjointSet ds(V);
		int mstWt = 0;
		cout << "Edges in the Minimum Spanning Tree:\n";
		for (auto it : edges)
		{
			int wt = it.first;
			int u = it.second.first;
			int v = it.second.second;
			if (ds.findUPar(u) != ds.findUPar(v))
			{
				mstWt += wt;
				ds.unionBySize(u, v);
				cout << u << " - " << v << " (Weight: " << wt
					 << ")\n";
			}
		}
		return mstWt;
	}
};
int main()
{
	int V, E;
	cout << "Enter the number of vertices: ";
	cin >> V;
	cout << "Enter the number of edges: ";
	cin >> E;
	vector<vector<int>> adj[V];
	cout << "Enter the edges (format: u v w) where u and v are vertices(0 - indexed) and w is the weight :\n";
	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		vector<int> tmp1 = {v, w};
		adj[u].push_back(tmp1);
		vector<int> tmp2 = {u, w};
		adj[v].push_back(tmp2);
	}
	Solution obj;
	int mstWt = obj.spanningTree(V, adj);
	cout << "The sum of all the edge weights in the MST: " << mstWt << endl;
	return 0;
}