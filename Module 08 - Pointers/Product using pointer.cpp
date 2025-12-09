#include <iostream>
using namespace std;

int product(int *a, int *b, int *ans){
    *ans = *a * *b;
   
}


int main () {
   int ans;
   int x = 10, b = 20;
   product(&x, &b, &ans);
    cout<<ans;

}
