class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int size = nums.size();
        int dp[size];
        for(int i = 0; i < size; i++) {
            dp[i] = INT_MIN;
        }
        dp[size - 1] = 0;
        for(int i = size - 2; i >= 0; i--) {
            for(int j = i + 1; j < size; j++) {
                if(-target <= nums[j] - nums[i] && nums[j] - nums[i] <= target && dp[j] != INT_MIN) {
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
        }
        if(dp[0] == INT_MIN) {
            return -1;
        }
        else {
            return dp[0];
        }
    }
};