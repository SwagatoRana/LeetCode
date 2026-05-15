class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return nums[0];
        int l = 0, r = size - 1;
        while(l <= r) {
            int m = (l + r) / 2;
            if(m == 0) {
                if(nums[0] < nums[size - 1]) return nums[0];
            }
            else {
                if(nums[m] < nums[m - 1]) return nums[m];
            }
            if(nums[m] < nums[r]) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return 0;
    }
};