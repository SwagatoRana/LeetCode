class Solution {
public:
    int numberOfSpecialChars(string word) {
        int size = word.size(), count = 0;
        set<char> s;
        for(int i = 0; i < size; i++) {
            if(s.count(tolower(word[i])) == 1) {
                continue;
            }
            else {
                if(word[i] >= 'A' && word[i] <= 'Z') {
                    s.insert(tolower(word[i]));
                    continue;
                }
                else {
                    s.insert(word[i]);
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
                        cout << word[i] << " ";
                    }
                }
            }
        }
        return count;
    }
};