class Solution {
public:
    int countPrimes(int n) {
        if (n<=2) return 0;
        vector<int> arr (n+1, 1);
        arr[0] = 0;
        arr[1] = 0;

        for (int i = 2; i <= (int)sqrt(n)+1;i++){
            if (arr[i]) {
                for (int j = i*i ; j < n; j += i){
                    arr[j] = false; 
                }
            }
        }
        int count = 0;
        for (int k = 0 ; k < n; k++){
            if (arr[k]) count+=1;
        }
        return count;
    }
};
