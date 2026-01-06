class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for ( int i = 0 ; i < nums.size() ; i++){
            if (nums[i] == 0) red += 1;
            else if ( nums [i] == 1) white += 1;
            else blue += 1;
        }
        
        for ( int j = 0 ; j < nums.size() ; j++){
            if (red != 0) {
                nums[j] = 0;
                red -= 1;
            }
            else if (white != 0){
                nums[j] = 1;
                white -= 1;
            }
            else nums[j] = 2;
        }
    }
};
