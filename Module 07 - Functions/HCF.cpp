#include <iostream>
using namespace std;

int HCF(int x, int y){
    int select;
    if (x > y) select = y;
    else select = x;
    int hcf;
    for (int i = 1; i<=select; i++){
        if (x % i == 0 && y % i == 0){
            hcf = i;
        }
    }
    return hcf;
}

int main() {
    cout<<HCF(36,360);
    
}
