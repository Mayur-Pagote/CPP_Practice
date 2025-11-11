#include <iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    
    if (num < 0){
        cout<<num*(-1);
    }
    else{
        cout<<num;
    }
}
