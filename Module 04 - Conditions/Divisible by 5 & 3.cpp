#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<endl;

    if (num % 5 == 0 && num % 3 == 0){
        cout<<"It is div by 5 and 3";
    }
    else {
        cout<<"No";
    }

}
