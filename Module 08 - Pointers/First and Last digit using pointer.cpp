#include <iostream>
using namespace std;

int fldigits(int *a){
    
    int first;
    int temp = *a;
    int last = temp%10;
    while (temp > 0){
        first = temp;
        temp /= 10;
        
    }
    cout<<"First digit is: "<<first<<" Last digit is: "<<last<<endl;
    *a = first * 10 + last;
   
}


int main () {
    int x = 12434;
    fldigits(&x);
    cout<<x;

}
