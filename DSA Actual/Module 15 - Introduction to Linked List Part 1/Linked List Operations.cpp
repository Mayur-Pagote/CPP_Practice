#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertTail(int val){
        Node* temp = new Node (val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertHead(int val){
        Node* temp = new Node(val);
        if (size==0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size += 1; 
    }

    void display(){
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertPos(int pos, int val){
        if (pos < 0 || pos > size){ 
            cout<<"Invalid position";
            return;
        }
        else if (pos == 0) insertHead(val);
        else if (pos == size) insertTail(val);
        else {
            int tempsize = 0;
            Node* temp = new Node (val);
            Node* newhead = head;
            while (tempsize != pos-1) {
                tempsize += 1;
                newhead = newhead->next;
            }
            temp -> next = newhead->next;
            newhead->next = temp;
            size += 1;
        }
        
    }

    void deleteHead(){
        if (size == 0) return;
        else if (size == 1){
            head = head->next;
            tail = tail->next;
        }
        else {
            head = head->next;
        }
        size--;

    }

    void deleteTail(){
        Node* temp = head;
        while (temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    int getelement(int pos){
        if (pos<0 || pos>size) return -1;
        else if (pos == 0) return head->val;
        else if (pos == size-1) return tail->val;
        else {
            Node* temp = head;
            for (int i = 1; i<=pos;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
};

int main () {
    LinkedList ll;

    ll.insertHead(2323);
    ll.insertTail(1);
    ll.insertTail(2);
    ll.insertTail(3);
    ll.insertPos(1, 3434);
    ll.display();

    

    ll.deleteHead();
    ll.display();

    ll.deleteTail();
    ll.display();

}
