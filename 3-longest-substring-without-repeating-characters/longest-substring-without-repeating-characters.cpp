class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int ans = 0;
        unordered_set<char> seen;
        int i = 0, j = 0;
        while(j < size){
            if(seen.find(s[j]) != seen.end()){
                while(s[i] != s[j]){
                    seen.erase(s[i]);
                    i++;
                }
                seen.erase(s[i]);
                i++;
            }
            seen.insert(s[j]);
            if(j - i + 1 > ans){
                ans = j - i + 1;
            }
            j++;
        }
        return ans;
    }
};