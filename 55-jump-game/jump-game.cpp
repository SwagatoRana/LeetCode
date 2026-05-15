class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return true;
        vector<bool> dp(size, false);
        dp[size - 1] = true;
        for(int i = size - 2; i >= 0; i--) {
            for(int j = 1; j <= nums[i]; j++) {
                if(dp[i + j] == true) {
                    dp[i] = true;
                    break;
                }
            }
        }
        if(dp[0] == true) return true;
        return false;
    }
};