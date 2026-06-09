class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int size = nums.size(), min = INT_MAX, max = INT_MIN;
        for(int i = 0; i < size; i++) {
            if(nums[i] < min) min = nums[i];
            if(nums[i] > max) max = nums[i];
        }
        long long a = (long long)k;
        long long b = (long long)max - (long long)min;
        return a * b;
    }
};