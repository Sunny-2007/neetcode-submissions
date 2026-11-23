class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26);
        if(s.size() != t.size()) return false;
        for(char c : s) {
            alpha[c - 'a']++;
        }
        for(char c : t) {
            alpha[c - 'a']--;
            if(alpha[c - 'a'] < 0) return false;
        }
        return true;
    }
};
