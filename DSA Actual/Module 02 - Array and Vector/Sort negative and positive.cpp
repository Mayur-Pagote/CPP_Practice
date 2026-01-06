#include <iostream>
#include <vector>
using namespace std;

void npsort(vector<int> &v){
    int  i = 0 , j = v.size()-1;
    int temp;
    while (i < j){
        if (v[i] < 0) i += 1;
        else if (v[j] >= 0) j -=1;
        else {
            temp = v[i];
            v[i] = v[j];
            v[j] = v[i];
            i += 1;
            j -= 1;
        }
    }
}

int main () {
    int size;
    cin>>size;

    vector <int> v;
    for (int i = 0 ; i < size ; i++ ){
        int var;
        cin>>var;
        v.push_back(var);
    }

    npsort(v);

    for (int i = 0 ; i < size ; i++ ){
        cout<<v[i]<<" ";
    }

    return 0;

}
