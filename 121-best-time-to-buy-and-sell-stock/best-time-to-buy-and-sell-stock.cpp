int minimum(int a, int b) {
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0, min = prices[0];
        for(int i = 1; i < size; i++) {
            if(prices[i] - min > profit) {
                profit = prices[i] - min;
            }
            min = minimum(min, prices[i]);
        }
        return profit;
    }
};