class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int x1 = 0, y1 = 0, x2 = row - 1, y2 = col - 1;
        while(x1 < row / 2 && y1 < col / 2) {
            int p = 2 * (x2 - x1 + y2 - y1);
            int arr[p];
            int r = k % p;
            if (r == 0) { x1++; y1++; x2--; y2--; continue; }
            int l = 0;
            for(int j = y1; j < y2; j++, l++) {
                arr[l] = grid[x1][j];
            }
            for(int i = x1; i < x2; i++, l++) {
                arr[l] = grid[i][y2];
            }
            for(int j = y2; j > y1; j--, l++) {
                arr[l] = grid[x2][j];
            }
            for(int i = x2; i > x1; i--, l++) {
                arr[l] = grid[i][y1];
            }
            int temp[r];
            for(int i = 0; i < r; i++) {
                temp[i] = arr[i];
            }
            for(int i = r; i < p; i++) {
                arr[i - r] = arr[i];
            }
            for(int i = p - r; i < p; i++) {
                arr[i] = temp[i - p + r];
            }
            l = 0;
            for(int j = y1; j < y2; j++, l++) {
                grid[x1][j] = arr[l];
            }
            for(int i = x1; i < x2; i++, l++) {
                grid[i][y2] = arr[l];
            }
            for(int j = y2; j > y1; j--, l++) {
                grid[x2][j] = arr[l];
            }
            for(int i = x2; i > x1; i--, l++) {
                grid[i][y1] = arr[l];
            }
            x1++, y1++, x2--, y2--;
        }
        return grid;
    }
};