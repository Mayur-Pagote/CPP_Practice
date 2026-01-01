#include <iostream>
using namespace std;

int main () {
    int marks[10];
    for (int i = 0; i<10; i++){
        cout<<"Enter marks of roll no: "<<i<<" ";
        cin>> marks[i];
    }

    for (int j = 0 ; j<10; j++){
        if (marks[j] > 35) cout<< j<<" ";
    }

    
}
