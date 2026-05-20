class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size(), cur = 0;
        vector<int> ans(size);
        unordered_map<int, int> m;
        for(int i = 0; i < size; i++) {
            if(A[i] == B[i]) {
                m[A[i]] = 2;
                cur++;
            }
            else {
                if(m.contains(A[i])) {
                    m[A[i]]++;
                    cur++;
                }
                else {
                    m[A[i]] = 1;
                }
                if(m.contains(B[i])) {
                    m[B[i]]++;
                    cur++;
                }
                else {
                    m[B[i]] = 1;
                }
            }
            ans[i] = cur;
        }
        return ans;
    }
};