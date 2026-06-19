class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0, cur = 0, size = gain.size();
        for(int i = 0; i < size; i++) {
            cur += gain[i];
            if(cur > ans) ans = cur;
        }
        return ans;
    }
};