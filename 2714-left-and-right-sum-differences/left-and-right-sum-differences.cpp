class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int size = nums.size();
        vector<int> l(size), r(size), ans(size);
        int sum = 0;
        for(int i = 0; i < size; i++) {
            l[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for(int i = size - 1; i >= 0; i--) {
            r[i] = sum;
            sum += nums[i];
        }
        for(int i = 0; i < size; i++) {
            ans[i] = abs(l[i] - r[i]);
        }
        return ans;
    }
};