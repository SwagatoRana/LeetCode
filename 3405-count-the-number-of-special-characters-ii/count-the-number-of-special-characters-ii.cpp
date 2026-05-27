class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size = word.size(), count = 0;
        vector<vector<int>>l(26);
        vector<vector<int>>u(26);
        for(int i = 0; i < size; i++) {
            if(word[i] >= 'a' && word[i] <= 'z') {
                l[word[i] - 'a'].push_back(i);
            }
            else {
                u[word[i] - 'A'].push_back(i);
            }
        }
        for(int i = 0; i < 26; i++) {
            if(l[i].size() == 0 || u[i].size() == 0) continue;
            if(l[i][l[i].size() - 1] < u[i][0]) count++;
        }
        return count;
    }
};