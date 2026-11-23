class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int pn = 1 << n;
        vector<vector<int>> ans(pn);
        for(int i = 0; i < pn; ++i) {
            int now = i;
            vector<int> sbs;
            int digit = 0;
            while(now != 0) {
                if (now % 2 != 0) sbs.push_back(nums[digit]);
                now >>= 1;
                digit++;
            }
            ans[i] = sbs;
        }
        return ans;
    }
};
