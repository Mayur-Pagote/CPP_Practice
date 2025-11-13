#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, diff, n;
    cin>>a>>diff>>n;
    for ( int i = 1;  i <= n; i++){
      cout<<a<<endl;
      a -= diff;
    }
    return 0;
}
