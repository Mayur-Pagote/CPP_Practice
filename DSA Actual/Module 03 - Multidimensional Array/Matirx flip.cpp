class Solution {
public:
    int calDeci (vector<vector<int>>& grid){
        int totalSum = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i = 0 ; i<rows; i++){
            int x = 1;
            for (int j = cols-1 ; j>=0; j--){
                totalSum += (grid[i][j] * x);
                x *= 2;
            }
        }
        return totalSum;
    }
    void flipcols(vector<vector<int>>& grid, int col){
    for (int r = 0; r < grid.size(); r++){
        grid[r][col] ^= 1; // toggle
    }
}
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        for (int i = 0 ; i < rows ; i++){
            if (grid[i][0] == 0){
                for(int j = 0 ; j < cols ; j++){
                    if (grid[i][j] == 0) grid[i][j] = 1;
                    else if(grid[i][j] == 1) grid[i][j] = 0; 
                }
            }
        }

        for (int c = 0; c < cols; c++){
            int count0 = 0, count1 = 0;
            for (int r = 0; r < rows; r++){
                if (grid[r][c] == 0) count0++;
                else count1++;
            }
            if (count0 > count1) flipcols(grid, c);
        }

        return calDeci(grid);
       
    }
        
    
};
