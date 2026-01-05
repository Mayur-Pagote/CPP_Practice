#include <iostream>
#include <vector>
using namespace std;

void rotate(vector <int>& v){
    int length = v.size();
    int last_element = v[v.size() - 1];

    v.pop_back();
    v.insert(v.begin(), last_element);
}

int main() {
	// your code goes here
    int length;
    cin>>length;
    vector <int> arr;
    for (int i = 0 ; i < length ; i++){
        int var;
        cin>>var;
        arr.push_back(var);
    }

    int revol;
    cin>>revol;

    for (int c = 0 ; c < revol ; c++){
        rotate(arr);
    }

    for ( int j = 0; j < arr.size() ; j++){
        cout<<arr[j]<<" ";
    }

	return 0;
}





