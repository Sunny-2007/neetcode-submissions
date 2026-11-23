class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < (int)nums.size(); ++i) {
            int res = target - nums[i];
            if(m.find(res)!= m.end()) {
                vector<int> ans = {m[res], i};
                return ans;
            }
            else {
                m[nums[i]] = i;
            }
        }
    }
};
