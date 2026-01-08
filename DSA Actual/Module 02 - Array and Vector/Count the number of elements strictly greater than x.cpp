#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector <int> v = {32,5757,545,23,23,434,5454,64,534,23,354,5,4535,4645,3534,24,22,42,4344,34342312};
    int count = 0;
    int check = 900;

    for (int i  = 0 ; i<v.size(); i++){
        if (v[i] > check) count += 1;
    }
    cout<<count;
}

