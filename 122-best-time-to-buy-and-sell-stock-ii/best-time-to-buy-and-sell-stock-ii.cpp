class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0, m = prices[size - 1];
        for(int i = size - 2; i >= 0; i--) {
            profit = max(profit, max(m - prices[i], profit + prices[i + 1] - prices[i]));
            m = max(m, prices[i]);
        }
        return profit;
    }
};