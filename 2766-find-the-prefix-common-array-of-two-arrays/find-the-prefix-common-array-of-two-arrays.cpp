class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int size = A.size(), cur = 0;
        vector<int> ans(size), freq(size);
        for(int i = 0; i < size; i++) {
            if(A[i] == B[i]) {
                freq[A[i] - 1] = 2;
                cur++;
            }
            else {
                if(freq[A[i] - 1] == 1) {
                    freq[A[i] - 1] = 2;
                    cur++;
                }
                else {
                    freq[A[i] - 1] = 1;
                }
                if(freq[B[i] - 1] == 1) {
                    freq[B[i] - 1] = 2;
                    cur++;
                }
                else {
                    freq[B[i] - 1] = 1;
                }
            }
            ans[i] = cur;
        }
        return ans;
    }
};