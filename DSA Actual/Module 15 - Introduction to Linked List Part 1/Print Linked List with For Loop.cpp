#include <iostream>
using namespace  std;

class Node {
public:
    int val;
    Node* next;

    Node (int val){
        this->val = val;
    }

};

int main () {
    Node a(10);
    Node b(20);
    Node c(30);

    a.next = &b;
    b.next = &c;
    c.next = NULL;
    Node temp = a;
    while (temp.next != NULL){
        cout<<temp.val<<endl;
        temp = (*(temp.next));
    }
    cout<<temp.val<<endl;
}
