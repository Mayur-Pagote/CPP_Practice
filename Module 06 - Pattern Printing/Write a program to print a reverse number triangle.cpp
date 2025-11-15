#include <iostream>
using namespace std;

int main() {
    // Write a program to print a reverse number triangle.
    int num; 
    cin >> num;
    int count = 1;
    for (int i = 1; i <= num; i++){
        for (int j = count; j >= 1; j--) cout<<j;
        cout<<endl;
        count += 1;
    }
        

    return 0;
}
