#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    int len1;
    cin>>len1;
    vector <int> v1;
    for (int i = 0 ; i<len1;i++){
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }

    int len2;
    cin>>len2;
    vector <int> v2;
    for (int i = 0 ; i<len2;i++){
        int temp;
        cin>>temp;
        v2.push_back(temp);
    }
    int i = 0, j = 0;
    vector<int> res;
    while (i <len1 && j <len2){
        if (v1[i] <= v2[j]) {
            res.push_back(v1[i]);
            i += 1;
        }
        else if (v1[i] >= v2[j]) {
            res.push_back(v2[j]);
            j += 1;
        } 
    }

    while (i < len1){
        res.push_back(v1[i]);
        i += 1;
    }
    while (j < len2){
        res.push_back(v2[j]);
        j += 1;
    }

    for ( int k = 0; k < len1+len2; k++){
        cout<<res[k]<<" ";
    }

	return 0;
}

