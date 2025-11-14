#include <iostream>
using namespace std;

int main() {
    // Print the table of ‘n’. Here ‘n’ is an integer which the user will input.
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i <= 10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

}
