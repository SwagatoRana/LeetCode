class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size(), cur = 0;
        vector<int> ans(size);
        unordered_set<int> s;
        for(int i = 0; i < size; i++) {
            if(A[i] == B[i]) {
                s.insert(A[i]);
                cur++;
            }
            else {
                if(s.count(A[i])) {
                    cur++;
                }
                else {
                    s.insert(A[i]);;
                }
                if(s.count(B[i])) {
                    cur++;
                }
                else {
                    s.insert(B[i]);;
                }
            }
            ans[i] = cur;
        }
        return ans;
    }
};