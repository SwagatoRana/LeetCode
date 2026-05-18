class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);
        int t = 1;
        for(int i = 1; i < size; i++) t = t * nums[i];
        ans[0] = t;
        for(int i = 1; i < size; i++) {
            if(nums[i] == 0) {
                int t2 = 1;
                for(int j = 0; j < size; j++) {
                    if(i == j) continue;
                    t2 = t2 * nums[j];
                }
                ans[i] = t2;
            }
            else {
                t = t / nums[i];
                t = t * nums[i - 1];
                ans[i] = t;
            }
        }
        return ans;
    }
};