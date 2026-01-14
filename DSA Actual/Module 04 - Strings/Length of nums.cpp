#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main () {
    int num;
    cin>>num;

    string numstr = to_string(num);

    cout<<numstr.length();
}
