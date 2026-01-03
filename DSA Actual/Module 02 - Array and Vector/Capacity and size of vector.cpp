#include <iostream>
#include <vector>
using namespace std;


int main () {
    vector<int> v;
    v.push_back(19);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(23);

    cout<<v.size();
    cout<<v.capacity();
}
