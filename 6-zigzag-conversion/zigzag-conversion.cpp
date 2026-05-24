class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        string ans;
        int size = s.size();
        int a = 2*numRows - 2, b = 0;
        for(int i = 0; i < numRows; i++){
            if(i == 0){
                int j = i;
                while(j < size){
                    ans = ans + string(1, s[j]);
                    j = j + a;
                }
            }
            else if(i == numRows - 1){
                int j = i;
                while(j < size){
                    ans = ans + string(1, s[j]);
                    j = j + b;
                }
            }
            else{
                int j = i;
                while(j < size){
                    ans = ans + string(1, s[j]);
                    j = j + a;
                    if(j >= size){
                        break;
                    }
                    ans = ans + string(1, s[j]);
                    j = j + b;
                }
            }
            a = a - 2;
            b = b + 2;
        }
        return ans;
    }
};