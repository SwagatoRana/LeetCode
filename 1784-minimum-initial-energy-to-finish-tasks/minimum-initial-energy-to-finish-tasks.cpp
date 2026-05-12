class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        int size = tasks.size();
        vector<int> d(size);
        for(int i = 0; i < size; i++) {
            d[i] = tasks[i][1] - tasks[i][0];
        }
        sort(d.begin(), d.end(), greater<int>());
        vector<int> sdi(size);
        int i = 0, ci = 0;
        while(i < size) {
            while(i < size - 1 && d[i] == d[i + 1]) {
                i++;
            }
            for(int j = 0; j < size; j++) {
                if(d[i] == tasks[j][1] - tasks[j][0]) {
                    sdi[ci] = j;
                    ci++;
                }
            }
            i++;
        }
        int ans = 0;
        int current = 0;
        for(int i = 0; i < size; i++) {
            int needed = 0;
            if(current < tasks[sdi[i]][1]) needed = tasks[sdi[i]][1] - current;
            ans += needed;
            current += needed;
            current -= tasks[sdi[i]][0];
        }
        return ans;
    }
};