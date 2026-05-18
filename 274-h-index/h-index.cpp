class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size = citations.size();
        int h = 0;
        sort(citations.begin(), citations.end(), greater<int>());
        erase(citations, 0);
        for(int i = 0; i < size; i++) {
            h = max(h, min(i + 1, citations[i]));
        }
        return h;
    }
};