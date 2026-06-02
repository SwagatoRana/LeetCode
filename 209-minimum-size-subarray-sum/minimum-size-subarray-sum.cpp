class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size = nums.size();
        int i = 0, j = 1, sum = nums[0];
        int c = INT_MAX;
        while(j < size) {
            if(sum < target) {
                sum += nums[j++];
            }
            else {
                c = min(c, j - i);
                sum -= nums[i++];
                if(c == 1) return c;
            }
        }
        while(i < size && sum >= target) {
            c = min(c, j - i);
            sum -= nums[i++];
        }
        if(c == INT_MAX) return 0;
        return c;
    }
};