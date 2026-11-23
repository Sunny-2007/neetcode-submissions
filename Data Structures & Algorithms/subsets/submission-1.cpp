class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        pn = 1 << n;
        inums = nums;
        vector<int> cur;
        dfs(0, cur);
        return ans;
    }
private:
    vector<int> inums;
    int pn;
    vector<vector<int>> ans;
    void dfs(int i, vector<int>& cur) {
        if(i == inums.size()) {
            ans.push_back(cur);
            return;
        }
        cur.push_back(inums[i]);
        dfs(i+1, cur);
        cur.pop_back();
        dfs(i+1, cur);
    }
};
