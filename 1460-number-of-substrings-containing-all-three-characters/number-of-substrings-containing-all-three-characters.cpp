class Solution {
public:
    int numberOfSubstrings(string s) {
        int size = s.size(), count = 0, a = 0, b = 0, c = 0;
        int i = 0, j = 1;
        if(s[i] == 'a') {
            a++;
        }
        else if(s[i] == 'b') {
            b++;
        }
        else {
            c++;
        }
        if(s[j] == 'a') {
            a++;
        }
        else if(s[j] == 'b') {
            b++;
        }
        else {
            c++;
        }
        while(j < size) {
            if(a == 0 || b == 0 || c == 0) {
                j++;
                if(j == size) {
                    break;
                }
                else {
                    if(s[j] == 'a') {
                        a++;
                    }
                    else if(s[j] == 'b') {
                        b++;
                    }
                    else {
                        c++;
                    }
                }
            }
            else {
                count += size - j;
                if(s[i] == 'a') {
                    a--;
                }
                else if(s[i] == 'b') {
                    b--;
                }
                else {
                    c--;
                }
                i++;
            }
        }
        return count;
    }
};