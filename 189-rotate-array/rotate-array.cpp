class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int r = k % size;
        if(r == 0) return;
        int temp[r];
        for(int i = size - r; i < size; i++) {
            temp[i - size + r] = nums[i];
        }
        for(int i = size - 1; i >= r; i--) {
            nums[i] = nums[i - r];
        }
        for(int i = 0; i < r; i++) {
            nums[i] = temp[i];
        }
    }
};