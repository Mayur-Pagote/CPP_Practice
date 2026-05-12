#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
    int length;
    cin>>length;
    vector<int> customers;
    vector<int> grumpy;
    for (int  i = 0 ; i < length ;i++){
        int temp;
        cin>>temp;
        customers.push_back(temp);
    }
    for (int  j = 0 ; j < length ;j++){
        int temp;
        cin>>temp;
        grumpy.push_back(temp);
    }
    int minutes;
    cin>>minutes;
    int total = 0;
        for (int  i  = 0 ; i <grumpy.size();i++){
            if (grumpy[i] == 0){
                total += customers[i];
            }
        }
        
        int new_total = 0;
        int  j = 0;
        for (j = 0 ; j < minutes;j++){
            if (grumpy[j] == 1){
                new_total += customers[j];
            }
        }
        
        int max_total = total+new_total;
        for (int k = 1; k<=grumpy.size()-minutes ;k++){
            if (grumpy[k-1] == 1){
                new_total -= customers[k-1];
            }
            if (grumpy[j] == 1){
                new_total += customers[j];
            }
            j+= 1;

            max_total = max(max_total, total+new_total);
        }
        cout<< max_total;

    }
