#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void displayArr(vector<int> v){
    for (int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int trapCal(vector<int> heights, vector<int> arr, vector<int> brr){
    int min_ele;
    int count = 0;
    for (int i = 1; i <= heights.size()-1; i++){
        min_ele = min(arr[i], brr[i]);
        if (min_ele > heights[i]) count += (min_ele - heights[i]);
    }
    return count;
}

void prevMakeGreat(vector<int> &heights, vector<int> &narr){
    int max_ele = -1;
    for (int i = 0; i<heights.size(); i++){
        narr.push_back(max_ele);
        if (max_ele <= heights[i]) max_ele = heights[i];
    }
}

void nextMakeGreat(vector<int> &heights, vector<int> &narr){
    int max_ele = -1;
    for (int i = heights.size()-1; i>=0; i--){
        narr.insert(narr.begin(), max_ele);
        if (max_ele <= heights[i]) max_ele = heights[i];
    }
}


int main () {
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> arr;
    vector<int> brr;
    prevMakeGreat(heights, arr);
    displayArr(arr);
    nextMakeGreat(heights, brr);
    displayArr(brr);
    cout<<trapCal(heights,arr, brr);
}
