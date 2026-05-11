class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        for(int i = size - 1; i >= 0; i--) {
            int temp = nums[i];
            while(temp != 0) {
                ans.insert(ans.begin(), temp % 10);
                temp = temp / 10;
            }
        }
        return ans;
    }
};