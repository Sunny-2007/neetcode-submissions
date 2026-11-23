class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, min_val = 101;
        for(int p : prices) {
            ans = max(p - min_val, ans);
            if (p < min_val) {
                min_val = p;
            }
        }
        return ans;
    }
};
