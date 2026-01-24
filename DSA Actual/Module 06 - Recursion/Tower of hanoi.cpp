#include <iostream>
using namespace std;

void hanoi(int disk, char a, char b, char c){
    if (disk == 0) return;
    hanoi(disk -1 , a, c, b);
    cout<<a<<" -> "<<c<<endl;
    hanoi(disk -1 , b, a, c);
}

int main () {
    hanoi(3, 'a', 'b', 'c');
}
