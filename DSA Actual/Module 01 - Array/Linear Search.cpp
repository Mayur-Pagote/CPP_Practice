#include <iostream>
using namespace std;

int main () {
    

    int arr[10] = {3,5,2,554,23,35,6,23,343,1};

    int input_var, found = 0;
    cout<<"Enter a number to find: ";
    cin>>input_var;

    for (int i = 0; i<10; i++){
        if (arr[i] == input_var) {
            cout<<"Yes found....";
            found = 1;
            break;
        }

    }

    if (found == 0) cout<<"Not found...";


    
}
