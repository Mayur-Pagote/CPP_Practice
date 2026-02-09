#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<string> arr){
    for(int i =0 ; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

int main () {
    vector<string> arr = {"physicswallah", "quiz", "practice",
"pwskills", "coding"};
    int size = arr.size();
    int pass = 0, length = size;
    while (true){
        
        int count = 0;
        for(int i = 1 ; i < length ; i++){
            if (arr[i] < arr[i-1]) {
                swap(arr[i], arr[i-1]);
                count += 1;
            }
        }
        length -= 1;
        if (count <= 0) break;
        pass += 1;
    }
    cout<<pass;
    displayVector(arr);

}
