class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int i = size - 1;
        while(i >= 0 && s[i] == ' ') i--;
        int t = i;
        while(i >= 0 && s[i] != ' ') i --;
        return t - i;
    }
};