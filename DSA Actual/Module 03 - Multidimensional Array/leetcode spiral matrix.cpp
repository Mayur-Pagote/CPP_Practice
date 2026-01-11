class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> sm;
        int top = 0, bottom = matrix.size()-1, left = 0, right = matrix[0].size()-1;
        while (top <= bottom && left <= right){

            for (int i = left ; i<=right; i++){
                sm.push_back(matrix[top][i]);
            }
            top += 1 ; 

            for (int j = top; j <= bottom; j++){
                sm.push_back(matrix[j][right]);
            }
            right -= 1;
            
            if (top <= bottom){
            for (int k = right; k >= left; k--){
                sm.push_back(matrix[bottom][k]);
            }
            bottom -=1;
            }
            if (left <= right){
            for (int l = bottom; l>=top; l--){
                sm.push_back(matrix[l][left]);
            }
            left += 1;
            }
        }
        return sm;
    }
};
