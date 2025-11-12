#include <iostream>
using namespace std;

int main() {
	int num;
    cout<<"Enter a number: ";
    cin>>num;

    if (num % 3 == 0 || num % 5 == 0){
        if (num % 15 == 0){
            cout<<"No";
        }
        else {
            cout<<"Yes";
        }
    }
    else{
        cout<<"No";
    }
}
