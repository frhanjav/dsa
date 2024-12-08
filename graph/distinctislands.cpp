class Solution
{
private:
	void dfs(int row, int col, vector<int> &vec, vector<vector<int>> vis, vector<vector<int>> &adj, int row0, int col0)
	{
		vis[row][col] = 1;
		vec.push_back({row - row0, col - col0});
		int n = grid.size();
		int m = grid[0].size();
		int delcol[] = {0, 1, 0, -1};
		int delrow[] = {-1, 0, -1, 0};
		for (int i = 0; i < 4; i++)
		{
			int nrow = n + delrow[i];
			int ncol = m + delcol[i];
			if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == 1)
			{
				dfs(nrow, ncol, vec, vis, adj, row0, col0);
			}
		}
	}

public:
	int countDistinctIslands(vector<int> &grid)
	{
		int n = grid.size();
		int m = grid[0].size();
		vector<vector<int>> vis(n, vector<int>(m, 0));
		set<vector<pair<int, int>>> st;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (!vis[i][j] && grid[i][j] == 1)
				{
					vector<pair<int, int>> vec;
					dfs(i, j, vec, vis, adj, i, j)
						st.insert(vec);
				}
			}
		}
		return st.size();
	}
}