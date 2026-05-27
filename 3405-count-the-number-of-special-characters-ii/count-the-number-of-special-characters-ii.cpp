class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size = word.size(), count = 0;
        vector<vector<int>>l(26, {-1});
        vector<vector<int>>u(26, {-1});
        for(int i = 0; i < size; i++) {
            if(word[i] >= 'a' && word[i] <= 'z') {
                l[word[i] - 'a'][0] = i;
            }
            else {
                if(u[word[i] - 'A'][0] == -1) {
                    u[word[i] - 'A'][0] = i;
                }
            }
        }
        for(int i = 0; i < 26; i++) {
            if(l[i][0] == -1 || u[i][0] == -1) continue;
            if(l[i][0] < u[i][0]) count++;
        }
        return count;
    }
};