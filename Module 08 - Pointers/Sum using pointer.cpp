#include <iostream>
using namespace std;


int main() {
    int x = 10;
    int y = 20;
    int ans;


    int* p1 = &x;
    int* p2 = &y;

    ans = *p1 + *p2;

    cout<<ans;
}
