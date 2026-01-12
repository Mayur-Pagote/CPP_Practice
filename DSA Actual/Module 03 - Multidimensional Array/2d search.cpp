class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int  i = matrix.size()-1, j = 0;
        while ((i < matrix.size() && i >= 0) && (j < matrix[0].size() && j >= 0)){
            if (matrix[i][j] == target) return true;
            if (target > matrix[i][j]) j++;
            else i--;
        }
        return false;
    }
};
