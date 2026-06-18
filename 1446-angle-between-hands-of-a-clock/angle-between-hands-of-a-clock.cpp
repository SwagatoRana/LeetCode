class Solution {
public:
    double angleClock(int hour, int minutes) {
        int a = hour * 60, b = minutes * 11;
        double ans = abs(a - b) / 2.0;
        ans = min(ans, 360 - ans);
        return ans;
    }
};