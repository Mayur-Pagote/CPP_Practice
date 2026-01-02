#include <iostream>
#include <unordered_set>
using namespace std;


int main () {
    int arr[10] = {0, 1,2222,2222,5,6,7,8,9,10};
    int check;
    unordered_set<int> seen;
    int saw  = 0;
    for (int i = 0; i < 10; i++ ){
        if (seen.find(arr[i]) == seen.end()) seen.insert(arr[i]);
        else {
            saw = 1;
            break;
        }
    }
    if (saw == 1) cout<<"Has duplicates";
    else cout<<"No Duplicates";
    
}
