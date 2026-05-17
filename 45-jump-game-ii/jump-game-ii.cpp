class Solution {
public:
    vector<int> dp = vector<int>(10000, INT_MAX);
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 0;
        dp[size - 1] = 0;
        for(int i = size - 2; i >= 0; i--) {
            int j = i + nums[i];
            if(j >= size) j = size - 1;
            int mi = j, mv = dp[j];
            while(j > i) {
                if(dp[j] < mv) {
                    mv = dp[j];
                    mi = j;
                }
                j--;
            }
            if(mv == INT_MAX) continue;
            dp[i] = dp[mi] + 1;
        }
        return dp[0];
    }
};