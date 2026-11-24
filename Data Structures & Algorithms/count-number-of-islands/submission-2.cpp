class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        queue<pair<int, int>> q;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                if(grid[i][j] == '1') {
                    // cerr << i << ' ' << j << '\n';
                    ans++;
                    grid[i][j] = '0';
                    q.push({i, j});
                }
                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    // cerr << x << ' ' << y << '\n';
                    q.pop();
                    for(int i = 0; i < 4; ++i) {
                        if(x+dx[i] < 0 || x+dx[i] >= n || y+dy[i] < 0 || y+dy[i] >= m || grid[x+dx[i]][y+dy[i]] == '0') {
                            continue;
                        }
                        cerr << x+dx[i] << ' ' << y+dy[i] << '\n';
                        grid[x+dx[i]][y+dy[i]] = '0';
                        q.push({x+dx[i], y+dy[i]});
                    }
                }
            }
        }
        return ans;
    }
private:
    int n, m;
    vector<int> dx = {1, 0, -1, 0};
    vector<int> dy = {0, -1, 0, 1};
};
