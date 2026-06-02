class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int lsize = landStartTime.size(), wsize = waterStartTime.size(), ans = INT_MAX;
        for(int i = 0; i < lsize; i++) {
            for(int j = 0; j < wsize; j++) {
                int k;
                if(landStartTime[i] < waterStartTime[j]) {
                    k = max(landStartTime[i] + landDuration[i], waterStartTime[j]) + waterDuration[j];
                }
                else {
                    k = max(waterStartTime[j] + waterDuration[j], landStartTime[i]) + landDuration[i];
                }
                if(k < ans) ans = k;
            }
        }
        return ans;
    }
};