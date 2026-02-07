#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(string &s){
    int size = s.length();
    while (true){
        int count = 0;
        for (int i = 1 ; i < size ; i++){
            if (s[i] < s[i-1]){
                swap(s[i], s[i-1]);
                count += 1;
            }
        }
        if (count <= 0) break;
        size -= 1;
    }
}

void displayStr(string arr){
    for(int i =0 ; i < arr.length(); i++){
        cout<<arr[i];
    }
}

int main () {
    string str = "AZYZXBDJKX";
    string newStr = "";
    for (int i = 0 ; i < str.length(); i++){
        if (str[i] >= 'X') newStr+=str[i];
    }
    displayStr(newStr);
    cout<<endl;
    bubbleSort(newStr);
    cout<<endl;
    displayStr(newStr);
}
