class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for(int x = 0; x < n; ++x) {
            for(int y = 0; y < m; ++y) {
                if(grid[x][y] == '1') {
                    ans++;
                    dfs(x, y, grid);
                }
                
            }
        }
        return ans;
    }
private:
    int n, m;
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, -1, 0, 1};
    void dfs(int x, int y, vector<vector<char>>& grid) {
        if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '0') return;
        grid[x][y] = '0';
        for(int i = 0; i < 4; ++i) {
            dfs(x+dx[i], y+dy[i], grid);
        }
        return;
    }
};
