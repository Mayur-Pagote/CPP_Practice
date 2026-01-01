#include <iostream>
using namespace std;

int main () {
    int x[5];
    for (int i = 0; i<5; i++){
        cout<<"Enter a element: ";
        cin>>x[i];
    }

    for (int i = 0; i<5; i++){
        
        cout<<x[i]<<" ";
    }
}
