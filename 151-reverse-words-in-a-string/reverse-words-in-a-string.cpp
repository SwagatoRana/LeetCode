class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        string ans = "", temp = "";
        int i = 0;
        while( i < size && s[i] == ' ') i++;
        while(i < size && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        ans = temp;
        temp = "";
        for(; i < size; i++) {
            if(s[i] == ' ') {
                if(temp == "") continue;
                else {
                    ans = temp + " " + ans;
                    temp = "";
                }
            }
            else {
                temp += s[i];
            }
        }
        if(temp != "") {
            ans = temp + " " + ans;
        }
        return ans;
    }
};