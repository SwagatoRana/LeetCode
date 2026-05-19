class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        vector<int> rg(size);
        for(int i = 0; i < size; i++) {
            rg[i] = gas[i] - cost[i];
        }
        for(int i = 0; i < size; i++) {
            if(rg[i] >= 0) {
                int cost = 0;
                int j;
                for(j = i; j < size; j++) {
                    cost += rg[j];
                    if(cost < 0) break;
                }
                if(cost < 0) {
                    i = j;
                    continue;
                }
                for(j = 0; j <= i; j++) {
                    cost += rg[j];
                    if(cost < 0) break;
                }
                if(j < i && cost < 0) return -1;
                if(j >= i) return i;
            }
        }
        return -1;
    }
};