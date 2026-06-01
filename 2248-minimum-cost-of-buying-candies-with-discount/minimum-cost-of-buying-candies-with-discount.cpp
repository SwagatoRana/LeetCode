class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int size = cost.size(), flag = 0, i = 0, ans = 0;
        while(i < size) {
            if(flag == 0 || flag == 1) {
                ans += cost[i];
                flag++;
            }
            else {
                flag = 0;
            }
            i++;
        }
        return ans;
    }
};