class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros = 0;
        int p1 = 1;
        int p2 = 1;

        for (int i = 0; i < nums.size() ;i++){
            if (nums[i] == 0){
                zeros += 1;
                p1 *= nums[i];
            }
            else {
                p2 *= nums[i];
                p1 *= nums[i];
            }
        }

        if (zeros > 1){
            for (int j = 0 ; j < nums.size() ; j++){
                nums[j] *= 0;
            }
        }
        else {
            for (int k = 0 ; k < nums.size() ; k++){
                if (nums[k] == 0) {
                    nums[k] = p2;
                }
                else {
                    nums[k] = p1/nums[k];
                }
            }
        }
        return nums;
    }
};
