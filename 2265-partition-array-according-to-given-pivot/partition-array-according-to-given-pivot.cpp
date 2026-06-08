class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int size = nums.size(), count = 0;
        vector<int> ans(size);
        for(int i = 0; i < size; i++) {
            if(nums[i] > pivot) count++;
        }
        int i = 0, j = size - count;
        for(int k = 0; k < size; k++) {
            if(nums[k] < pivot) {
                ans[i] = nums[k];
                i++;
            }
            else if(nums[k] > pivot) {
                ans[j] = nums[k];
                j++;
            }
        }
        for(int k = i; k < size - count; k++) ans[k] = pivot;
        return ans;
    }
};