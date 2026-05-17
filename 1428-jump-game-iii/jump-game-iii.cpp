class Solution {
public:
    vector<int> visited = vector<int>(50000, 0);
    bool canReach(vector<int>& arr, int start) {
        visited[start] = 1;
        if(arr[start] == 0) return true;
        bool right = false, left = false;
        if(start + arr[start] < arr.size() && visited[start + arr[start]] == 0) {
            right = canReach(arr, start + arr[start]);
        }
        if(start - arr[start] >= 0 && visited[start - arr[start]] == 0) {
            left = canReach(arr, start - arr[start]);
        }
        return right || left;
    }
};