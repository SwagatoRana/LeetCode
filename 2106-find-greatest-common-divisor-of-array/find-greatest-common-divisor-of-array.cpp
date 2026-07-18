class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        return gcd(nums[0], nums[size - 1]);
    }
};