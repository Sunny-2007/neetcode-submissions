class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(50);
        for(int i = 0; i < n; ++i) {
            if(cnt[nums[i] + 20] == 0) norep.push_back(nums[i]);
            cnt[nums[i] + 20]++;
        }
        dfs(0, cnt);
        return ans;
    }
private:
    vector<vector<int>> ans;
    vector<int> norep;
    vector<int> cur;
    void dfs(int index, vector<int>& cnt) {
        if(index == norep.size()) {
            ans.push_back(cur);
            return;
        }
        for(int i = 0; i < cnt[norep[index]+20]; ++i) {
            cur.push_back(norep[index]); 
        }
        for(int i = 0; i < cnt[norep[index]+20]; ++i) {
            dfs(index+1, cnt);
            cur.pop_back();  
        }
        dfs(index+1, cnt);
    }
};
