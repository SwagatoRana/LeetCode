class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i = num1; i <= num2; i++) {
            if(i < 100) continue;
            string s = to_string(i);
            int size = s.size();
            for(int i = 1; i < size - 1; i++) {
                if(s[i] - '0' > s[i - 1] - '0' && s[i] - '0' > s[i + 1] - '0') {
                    count++;
                }
                else if(s[i] - '0' < s[i - 1] - '0' && s[i] - '0' < s[i + 1] - '0') {
                    count++;
                }
            }
        }
        return count;
    }
};