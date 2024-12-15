#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
	void shortest_distance(vector<vector<int> > &matrix)
	{
		int n = matrix.size();

		// Replace -1 with a large value to indicate no path
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (matrix[i][j] == -1)
				{
					matrix[i][j] = 1e9;
				}
				if (i == j)
					matrix[i][j] = 0;
			}
		}
		// Floyd-Warshall Algorithm
		for (int k = 0; k < n; k++)
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					matrix[i][j] = min(matrix[i][j],
									   matrix[i][k] + matrix[k][j]);
				}
			}
		}
		// Replace large values back to -1 to indicate no
		// reachable path
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (matrix[i][j] == 1e9)
				{
					matrix[i][j] = -1;
				}
			}
		}
	}
};
int main()
{
	int V;
	cout << "Enter the number of vertices: ";
	cin >> V;
	vector<vector<int>> matrix(V, vector<int>(V));
	cout << "Enter the adjacency matrix (" << V << "x" << V << "), use -1 for no path and 0 for self-loops:\n";
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			cin >> matrix[i][j];
		}
	}
	Solution obj;
	obj.shortest_distance(matrix);
	cout << "\nThe shortest distance matrix is:\n";
	for (auto row : matrix)
	{
		for (auto cell : row)
		{
			cout << cell << " ";
		}
		cout << endl;
	}
	return 0;
}