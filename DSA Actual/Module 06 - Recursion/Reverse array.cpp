#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void reverse_recur(vector <int> &mat,int i, int j){
   if (i > j) return;
   int temp = mat[i];
   mat[i] = mat[j];
   mat[j] = temp;
   reverse_recur(mat, i+1, j-1);
}

int main () {
    vector <int> matrix = {1,2,3,4,5,6,7};
    int start = 0;
    int end = matrix.size()-1;
    reverse_recur(matrix, start, end);

    for (int i = start; i <= end; i++){
        cout<<matrix[i];
    }
}
