class Solution {
public:
    int minJumps(vector<int>& arr) {
        int size = arr.size();
        queue<int> bfs;
        unordered_map<int, vector<int>> m;
        vector<bool> visited(size, false);
        for(int i = 0; i < size; i++) {
            m[arr[i]].push_back(i);
        }
        int step = 0;
        bfs.push(0);
        visited[0] = true;
        while(!bfs.empty()) {
            int s = bfs.size();
            while(s--) {
                int cur = bfs.front();
                if(cur == size - 1) return step;
                visited[cur] = true;
                if(cur - 1 >= 0 && !visited[cur - 1]) {
                    bfs.push(cur - 1);
                    visited[cur - 1] = true;
                }
                if(cur + 1 < size && !visited[cur + 1]) {
                    bfs.push(cur + 1);
                    visited[cur + 1] = true;
                }
                for(int i : m[arr[cur]]) {
                    if(!visited[i]) {
                        bfs.push(i);
                        visited[i] = true;
                    }
                }
                m.erase(arr[cur]);
                bfs.pop();
            }
            step++;
        }
        return -1;
    }
};