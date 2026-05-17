class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix[0].size() * matrix.size() - 1;
        while (l <= r) {
            int m = l + (r - l)/2 ;
            int row = m / matrix[0].size(); // 4 / 4 = 1
            int col = m % matrix[0].size(); // 4 % 4 = 0
            if (target < matrix[row][col]) {
                r = m - 1;
            }
            else if (target > matrix[row][col]) {
                l = m + 1;
            }
            else return true;
        }
        return false;
    }
};
