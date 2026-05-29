class Solution {
public:
    int minElement(vector<int>& nums) {
        int size = nums.size(), ans = INT_MAX;
        for(int i = 0; i < size; i++) {
            int t = nums[i], sum = 0;
            while(t != 0) {
                sum += t % 10;
                t /= 10;
            }
            if(sum < ans) ans = sum;
        }
        return ans;
    }
};