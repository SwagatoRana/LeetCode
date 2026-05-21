class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> s;
        int ans = 0;
        for(int i : arr1) {
            string str = to_string(i);
            string pr = "";
            for(char c : str) {
                pr += c;
                s.insert(pr);
            }
        }
        for(int i : arr2) {
            string str = to_string(i);
            string pr = "";
            int j = 0;
            for(char c : str) {
                pr += c;
                j++;
                if(s.count(pr)) {
                    if(j > ans) ans = j;
                }
                else {
                    break;
                }
            }
        }
        return ans;
    }
};