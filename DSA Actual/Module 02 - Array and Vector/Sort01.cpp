#include <iostream>
#include <vector>
using namespace std;

int sortzo (vector<int>& v){
    int count0 = 0, count1= 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] == 0) count0 += 1;
        else count1 += 1;
    }

    for (int j = 0; j < v.size(); j++){
        if (j < count0-1) v[j] = 0; 
        else v[j] = 1;
    }

}


int main () {
    vector <int> v = {0,1,1,0,1,0,0,0,1,1,1,0};
    sortzo(v);
    for (int k = 0; k<v.size(); k++){
        cout<<v[k]<<" ";
    }
}
