class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size = word.size(), count = 0;
        vector<int> checked(26, 0);
        for(int i = 0; i < size; i++) {
            if(checked[tolower(word[i]) - 'a'] == 1) {
                continue;
            }
            else {
                if(word[i] >= 'A' && word[i] <= 'Z') {
                    checked[tolower(word[i]) - 'a'] = 1;
                    continue;
                }
                else {
                    checked[word[i] - 'a'] = 1;
                    int f = 0;
                    int j = i + 1;
                    while(j < size) {
                        if(word[j] == tolower(word[i])) {
                            if(f == 1) break;
                        }
                        else if(word[j] == toupper(word[i])) {
                            f = 1;
                        }
                        j++;
                    }
                    if(j == size && f == 1) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};