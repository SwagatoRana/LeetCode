class Solution {
public:
    string processStr(string s) {
        int size = s.size();
        string ans = "";
        for(int i = 0; i < size; i++) {
            if(s[i] >= 'a' && s[i] <= 'z') {
                ans += s[i];
            }
            else {
                if(s[i] == '*') {
                    int t = ans.size();
                    if(t > 0) {
                        ans.erase(t - 1);
                    }
                }
                else if(s[i] == '#') {
                    ans += ans;
                }
                else {
                    reverse(ans.begin(), ans.end());
                }
            }
        }
        return ans;
    }
};