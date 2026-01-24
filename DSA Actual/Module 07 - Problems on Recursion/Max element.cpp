#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_elemet (vector<int> arr, int start, int max_ele){
    if (arr.size() == start)return max_ele;
    max_ele = max(max_ele, arr[start]);
    return max_elemet(arr, start+1, max_ele);
}


int main() {
    vector<int> num = {324,34,2323,2424,334,323,435,3345,36};
    cout<<max_elemet(num, 0, -1);
}
