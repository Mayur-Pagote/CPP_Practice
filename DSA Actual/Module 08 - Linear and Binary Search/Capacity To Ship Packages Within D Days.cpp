class Solution {
public:
    bool checkDays(vector<int>& weights, int days, int minWeight){
        int i =0 ;
        int temp = minWeight;
        while (i< weights.size() && days > 0){
            if (temp < weights[i] ){
                days -= 1;
                temp = minWeight;
            }
            else {
                temp -= weights[i];
                i += 1;
            }
        }
        return (i == weights.size());
    }
    
    void findMaxSum(vector<int>& weights, int &low, int &high){
        int max_ele = 0;
        int sum_ele = 0;
        for(int i = 0 ; i<weights.size(); i++){
            sum_ele += weights[i];
            if (max_ele < weights[i]) max_ele = weights[i];
        }
        low = max_ele;
        high = sum_ele;
        return;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low, high;
        findMaxSum(weights, low, high);
        int min_weight = high;
        while (low <= high){
            int mid = (low+high) / 2;
            if (checkDays(weights, days, mid)) {
                if (min_weight > mid) min_weight = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return min_weight;
        
    }
};
