class Solution {
public:
    void rev(vector<int>& v, int start, int end){
    while (start < end){
        swap(v[start], v[end]);
        start += 1;
        end -= 1;
        }        
    }
    void nextPermutation(vector<int>& nums) {
        

        int idx = -1;
        
        for (int k = nums.size()-2 ; k >= 0 ; k--){
            if (nums[k] < nums[k+1]) {
                idx = k;
                break;
            }
        }

        if (idx == -1){
            rev(nums, 0, nums.size()-1);
            return;
        }

        rev(nums, idx+1, nums.size()-1);
        int justgreat;
        for ( int l = idx+1 ; l < nums.size(); l++){
            if (nums[idx] < nums[l]) {justgreat  =l; break;}
        }
  
        int temp = nums[idx];
        nums[idx] = nums[justgreat];
        nums[justgreat] = temp;
    }
};
