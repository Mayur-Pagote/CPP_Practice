#include <iostream>
using namespace std;

int main() {
	char s;
    cout<<"Enter a character: ";
    cin>>s;

    if (((int)s>=65 && (int)s <= 90) || ((int)s>=97 && (int)s <= 122) ){
        cout<<"Yes is it a alphabet";
    }
    else {
        cout<<"No";
    }
}
