class Solution {
public:
    bool check(vector<int>& nums) {
        int i = 1, size = nums.size();
        if(size == 1) return true;
        while(i < size && nums[i] >= nums[i - 1]) i++;
        if(i == size) return true;
        i++;
        for(; i < size; i++) {
            if(nums[i] < nums[i - 1]) return false;
        }
        if(nums[size - 1] > nums[0]) return false;
        return true;
    }
};