#include <iostream>
using namespace std;

int main () {
    int marks[5];
    for (int i = 0; i<5; i++){
        cout<<"Enter marks of roll no: "<<i<<" ";
        cin>> marks[i];
    }
    int length = sizeof(marks) / sizeof(marks[0]);
    for (int j = 0 ; j<length; j++){
         cout<< marks[j]<<" ";
    }

    
}
