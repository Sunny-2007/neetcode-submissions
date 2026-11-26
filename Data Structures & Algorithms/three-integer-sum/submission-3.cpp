class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); ++i) {
            int f = i+1, b = nums.size()-1;
            int res = 0 - nums[i];
            if(i >= 1 && nums[i] == nums[i-1]) {
                continue;
            }
            while(f < b) {
                if (nums[f] + nums[b] < res) {
                    f++;
                }
                else if (nums[f] + nums[b] > res) {
                    b--;
                }
                else {
                    vector<int> v = {nums[i], nums[b], nums[f]};
                    ans.push_back(v);
                    f++;
                    b--;
                    while(f < b && nums[f] == nums[f-1]) {
                        f++;
                    }
                }
            }
        }
        return ans;
    }

};
