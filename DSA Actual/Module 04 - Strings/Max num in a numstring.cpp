#include <iostream>
#include <string>
using namespace std;

int main() {
  
	// your code goes here
    string str;
    cin>>str;
    int maxNum = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] > str[maxNum])  maxNum = i;
    }
    cout<<maxNum;
	return 0;
}
