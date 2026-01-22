#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void find_element(vector <int> mat,int target,int i, int j){
   if (i>j) {
    cout<<"Not found";
    return;
   }
   if (mat[i] == target) {
    cout<<"Found at index: "<<i;
    return;
   }
   if (mat[j] == target) {
    cout<<"Found at index: "<<j;
    return;
   }
   find_element(mat,target,i+1, j-1);

}

int main () {
    vector <int> matrix = {1,2,3,4,5,6,7};
    int start = 0;
    int end = matrix.size()-1;

    find_element(matrix, 4, start, end);
    
}
