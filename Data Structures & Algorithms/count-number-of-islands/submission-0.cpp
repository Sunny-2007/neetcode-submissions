class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> visit(n, vector<int>(m, 0));
        vector<int> dx = {1, 0, -1, 0};
        vector<int> dy = {0, -1, 0, 1};
        int ans = 0;
        for(int x = 0; x < n; ++x) {
            for(int y = 0; y < m; ++y) {
                if(grid[x][y] == '1' && !visit[x][y]) {
                    ans++;
                    dfs(x, y, visit, grid);
                }
                
            }
        }
        return ans;
    }
private:
    int n, m;
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, -1, 0, 1};
    void dfs(int x, int y, vector<vector<int>>& visit, vector<vector<char>>& grid) {
        if(visit[x][y] || grid[x][y] == '0') return;
        visit[x][y] = 1;
        for(int i = 0; i < 4; ++i) {
            if(x+dx[i] >= 0 && x+dx[i] < n && y+dy[i] >= 0 && y+dy[i] < m) {
                dfs(x+dx[i], y+dy[i], visit, grid);
            }
        }
        return;
    }
};
