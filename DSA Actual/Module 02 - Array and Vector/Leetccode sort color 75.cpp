class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for ( int i = 0 ; i < nums.size() ; i++){
            if (nums[i] == 0) red += 1;
            else if ( nums [i] == 1) white += 1;
            else blue += 1;
        }
        int ne = 0;
        for ( int j = 0 ; j < red ; j++){
            nums[ne] = 0;
            ne += 1;
        }
        for ( int k = 0 ; k < white ; k++){
            nums[ne] = 1;
            ne += 1;
        }
        for ( int l = 0 ; l < blue ; l++){
            nums[ne] = 2;
            ne += 1;
        }
    }
};
