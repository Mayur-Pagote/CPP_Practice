#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printer(vector <int> &mat, int length){
    for (int i = 0; i < length; i++){
        cout<<mat[i]<<" ";
    }
    cout<<endl;
}

void summer(vector <int> &mat, int length){
    for (int i = 1; i < length; i++){
        mat[i-1] += mat[i];
    }
    mat.pop_back();
}

void triangle_sum (vector <int> &mat){
    int length = mat.size();
    printer(mat, length);
    if (length == 1) return;
    summer(mat, length);
    triangle_sum(mat);
}

int main () {
    vector <int> matrix = {5, 4, 3, 2, 1};
    int start = 0;
    int end = matrix.size()-1;

    triangle_sum(matrix);

    
}
