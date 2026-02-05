#include <iostream>
#include <vector>
using namespace std;

long long countHours(vector<int>& piles, int speed){
        long long totalHours = 0;
        int tempHour;
        for(int i = 0 ; i<piles.size(); i++){
            if (piles[i] % speed == 0) tempHour = piles[i]/speed;
            else tempHour = (piles[i] / speed) + 1;
            totalHours+= tempHour;
        }
        return totalHours;
    }
    int findMax(vector<int>& piles){
        int maximum = 0;
        for(int i = 0;i < piles.size(); i++){
            maximum = max(maximum, piles[i]);
        } 
        return maximum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxofpiles = findMax(piles);
        int low = 1, high = maxofpiles;
        int minHour = maxofpiles;
        while(low <= high){
            long long mid = (low+high)/2;
            long long checkHours = countHours(piles, mid);

            if (checkHours <= h) {
                minHour = mid;
                high = mid - 1;
            }
            
            else {
                low = mid+1;
            }
        }
        return minHour;
    }

int main () {

    vector<int> arr;

    int size;
    cin>>size;

    for(int i = 0 ;i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int maxHour;
    cin>>maxHour;

    cout<<minEatingSpeed(arr, maxHour);

}
