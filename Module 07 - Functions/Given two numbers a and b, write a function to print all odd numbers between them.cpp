#include <iostream>
using namespace std;

int odd_finder(int a, int b){
    for (int i = a; i <= b; i++){
        if (i % 2 != 0 ) cout<<i<<endl;
    }
    
}

int main() {
    odd_finder(3,7);
}
