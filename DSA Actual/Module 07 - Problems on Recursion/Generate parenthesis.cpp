#include <iostream>
using namespace std;

void gpr(string str, int open, int close, int size){
    if (close == size && open == size) {
        cout << str << endl;
        return;
    }

    if (open > close) {
        gpr(str + ')', open, close + 1, size);
    }

    if (open < size) {
        gpr(str + '(', open + 1, close, size);
    }
}

int main (){
    gpr("", 0, 0, 3);
    return 0;
}
