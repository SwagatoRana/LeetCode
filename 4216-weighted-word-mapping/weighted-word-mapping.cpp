class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int size = words.size();
        string ans = "";
        for(int i = 0; i < size; i++) {
            int st = words[i].size(), sum = 0;
            for(int j = 0; j < st; j++) {
                sum += weights[words[i][j] - 'a'];
            }
            char t = 'z' - (sum % 26);
            ans += t;
        }
        return ans;
    }
};