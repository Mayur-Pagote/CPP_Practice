#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void rever(vector <int> &v , int start, int end){
    while (start<end){
        swap(v[start], v[end]);
        start += 1;
        end -= 1;
    }
}


int main () {
    int size;
    cin>>size;

    vector<int> perarr;
    for ( int k =0 ; k < size; k++){
        int temp;
        cin>>temp;
        perarr.push_back(temp); 
    }

    int idx = -1;

    for (int l = size-2; l >= 0 ; l++){
        if (perarr[l] < perarr[l+1]){
            idx = l;
            break;
        }
    }
    if (idx == -1){
        rever(perarr, 0, size-1);
        for (int j = 0 ; j<size; j++){
        cout<<perarr[j]<<" ";
        
    }

    }
    
    else {
    for (int i = size-1; i > idx; i--){
        if (perarr[idx] < perarr[i]){
            swap(perarr[idx], perarr[i]);
            break;
        }
    }
    rever(perarr, idx+1, size-1);
    }
    
   

    for (int j = 0 ; j<size; j++){
        cout<<perarr[j]<<" ";
    }



}
