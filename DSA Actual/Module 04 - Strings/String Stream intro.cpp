#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main () {
    string str = "I am a coder";
    stringstream ss(str);
    string temp;
    while (ss>>temp){
        cout<<temp<<endl;
    }
}
