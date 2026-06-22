class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> m;
        m['b'] = 0, m['a'] = 0, m['l'] = 0, m['o'] = 0, m['n'] = 0;
        int size = text.size();
        for(int i = 0; i < size; i++) {
            m[text[i]]++;
        }
        int ans = m['b'];
        ans = min(ans, m['a']);
        ans = min(ans, m['l'] / 2);
        ans = min(ans, m['o'] / 2);
        ans = min(ans, m['n']);
        return ans;
    }
};