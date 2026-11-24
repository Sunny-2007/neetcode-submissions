class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                t += tolower(s[i]);
            }
            else if((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')) {
                t += tolower(s[i]);
            }
        }
        int front = 0, end = end = t.size()-1;
        while(front <= end) {
            if(t[front] == t[end]) {
                front++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }
};
