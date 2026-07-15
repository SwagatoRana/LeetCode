class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so = 1;
        int o = 0;
        for(int i = 0; i < n; i++) {
            o += so;
            so += 2;
        }
        int se = 2;
        int e = 0;
        for(int i = 0; i < n; i++) {
            e += se;
            se += 2;
        }
        return gcd(o, e);
    }
};