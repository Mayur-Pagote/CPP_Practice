#include <iostream>
using namespace std;

void print_1ton(int num, int main_num){
    if (num == main_num+1) return;
    cout<<num<<endl;
    print_1ton(num+1, main_num);
    
}


int main () {
    int num;
    cin>>num;

    print_1ton(1, num);
}

