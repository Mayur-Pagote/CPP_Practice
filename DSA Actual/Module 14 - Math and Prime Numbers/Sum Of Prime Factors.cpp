#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
        if (n == 1) return false;
        for (int  i = 2; i<=(int)sqrt(n);i++){
            if (n%i == 0) return false;
        }
        return true;
    }


    int smallestValue(int n) {
        if (isPrime(n)) return n;
        
        int sum = 0;

        for (int i = 1; i < sqrt(n);i++){
            if (n%i == 0 && isPrime(i)) {
                int temp = n;
                while (temp % i == 0) {
                    sum += i;
                    temp /= i;
                }
                }
        }

        for (int i = sqrt(n); i >= 1; i--){
            if (n%i == 0 && isPrime((n/i))) {
                int temp = n;
                while (temp % (n/i) == 0) {
                    sum += (n/i);
                    temp /= (n/i);
                }
        }
        }
        if (n == sum) return n;
        return smallestValue(sum);
        
    }



int main (){
    
    int num;
    cin>>num;

    cout<<smallestValue(num);
};

