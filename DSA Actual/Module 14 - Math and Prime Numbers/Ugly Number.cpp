#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num;
    cin>>num;

    

    if (num<=0) cout<<"false";
    else {
        vector<int> arr  {2,3,5};
        for (int i =0; i < arr.size(); i++){
            while (num%arr[i] == 0) num /= arr[i];
        }
    if (num==1) cout<<"true";
    else cout<<"false";    
    }
    return 0;
}
