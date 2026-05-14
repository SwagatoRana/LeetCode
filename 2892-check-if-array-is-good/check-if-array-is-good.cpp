class Solution {
public:
    bool isGood(vector<int>& nums) {
        int size = nums.size();
        if(size < 2) return false;
        sort(nums.begin(), nums.end());
        if(size != nums[size - 1] + 1) return false;
        for(int i = 0, j = 1; i < size - 1; i++, j++) {
            if(nums[i] != j) return false;
        }
        if(nums[size - 1] != nums[size - 1]) return false;
        return true;
    }
};