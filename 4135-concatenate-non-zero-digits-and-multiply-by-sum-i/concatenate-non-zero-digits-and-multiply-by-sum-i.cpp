class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x = 0, sum = 0;
        int size = s.size();
        for(int i = 0; i < size; i++) {
            if(s[i] != '0') {
                x = x * 10 + (s[i] - '0');
                sum += (s[i] - '0');
            }
        }
        return x * sum;
    }
};