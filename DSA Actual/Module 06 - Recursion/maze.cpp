#include <iostream>
using namespace std;

int maze(int row, int col){
    if (row == 1 || col == 1) return 1;
    return maze(row-1, col) + maze (row, col-1);
}

int main () {
    
    cout<<maze(3, 4);
}
