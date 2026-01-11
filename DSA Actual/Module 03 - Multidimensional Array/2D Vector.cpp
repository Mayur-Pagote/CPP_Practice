#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector< vector<int> > arr;
    vector <int>v1;
    vector <int>v2;
    vector <int>v3;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2.push_back(123);
    v2.push_back(223);
    v2.push_back(2);
    v3.push_back(21);
    v3.push_back(23);
    v3.push_back(34);

    arr.push_back(v1);
    arr.push_back(v2);
    arr.push_back(v3);

    cout<<arr[0][0];
}
