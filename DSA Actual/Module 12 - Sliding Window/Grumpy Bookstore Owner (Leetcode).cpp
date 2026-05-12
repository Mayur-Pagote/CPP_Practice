class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int total = 0;
        for (int  i  = 0 ; i <grumpy.size();i++){
            if (grumpy[i] == 0){
                total += customers[i];
            }
        }
        
        int new_total = 0;
        int  j = 0;
        for (j = 0 ; j < minutes;j++){
            if (grumpy[j] == 1){
                new_total += customers[j];
            }
        }
        
        int max_total = total+new_total;
        for (int k = 1; k<=grumpy.size()-minutes ;k++){
            if (grumpy[k-1] == 1){
                new_total -= customers[k-1];
            }
            if (grumpy[j] == 1){
                new_total += customers[j];
            }
            j+= 1;

            max_total = max(max_total, total+new_total);
        }
        return max_total;

    }
};
