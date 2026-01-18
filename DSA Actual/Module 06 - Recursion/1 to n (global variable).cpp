#include <iostream>
using namespace std;
int count = 1;
void print_1ton(int main_num){
    if (count == main_num+1) return;
    cout<<count<<endl;
    count += 1;
    print_1ton(main_num);
    
}


int main () {
    int num;
    cin>>num;

    print_1ton( num);
}

