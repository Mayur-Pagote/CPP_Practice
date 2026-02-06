#include <iostream>
#include <vector>
using namespace std;

long long findMax(vector<int>& time){
        long long maxVal = 0;
        for(int x : time){
            maxVal = max(maxVal, (long long)x);
        }
        return maxVal;
    }

    long long checkTrips(vector<int>& time, long long mid){
        long long temp = 0;
        for(int i = 0 ; i< time.size(); i++){
            temp += mid / time[i];
        }
        return temp;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long high = findMax(time) * (long long)totalTrips;
        long long ans = -1;

        while (low <= high){
            long long mid = (low + high) / 2;
            if (checkTrips(time, mid) >= totalTrips){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }

int main () {
    vector<int> arr;
    int size;
    cin>>size;
    for(int i =0 ; i < size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int trips;
    cin>>trips;

    cout<<minimumTime(arr, trips);

}
