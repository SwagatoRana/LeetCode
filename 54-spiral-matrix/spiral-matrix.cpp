class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        int x1 = 0, x2 = row - 1, y1 = 0, y2 = col - 1;
        vector<int> ans;
        while(x1 <= x2 && y1 <= y2) {
            for(int y = y1; y <= y2; y++) {
                ans.push_back(matrix[x1][y]);
            }
            for(int x = x1 + 1; x <= x2; x++) {
                ans.push_back(matrix[x][y2]);
            }
            if(x1 != x2) {
                for(int y = y2 - 1; y >= y1; y--) {
                    ans.push_back(matrix[x2][y]);
                }
            }
            if(y1 != y2) {
                for(int x = x2 - 1; x > x1; x--) {
                    ans.push_back(matrix[x][y1]);
                }
            }
            x1++, x2--, y1++, y2--;
        }
        return ans;
    }
};