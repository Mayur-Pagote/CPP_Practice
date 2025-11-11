#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char s;
    cout<<"Enter a character: ";
    cin>>s;

    if ((int)s>=65 && (int)s <= 122 ){
        cout<<"Yes is it a alphabet";
    }
    else {
        cout<<"No";
    }
}
