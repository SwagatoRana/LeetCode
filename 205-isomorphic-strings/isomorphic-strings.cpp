class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        map<char, char> om;
        int size = s.size();
        for(int i = 0; i < size; i++) {
            if(m.contains(s[i]) != om.contains(t[i])) return false;
            if(m.contains(s[i]) && m[s[i]] != t[i]) return false;
            if(om.contains(t[i]) && om[t[i]] != s[i]) return false;
            m[s[i]] = t[i];
            om[t[i]] = s[i];
        }
        return true;
    }
};