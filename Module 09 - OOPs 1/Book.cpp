#include <iostream>
using namespace std;


class book {
    public:
    char name;
    int price;
    int pages;

    int countBook(int p){
        if (price<p) return 1;
        else return 0;
    }

    bool isBookPresent(char book){
        if (name == book) return true;
        else return false; 
    }
};


int main () {
    book IKIGAI;
    IKIGAI.name = 'I';
    IKIGAI.price = 500;
    IKIGAI.pages = 100;
    cout<<IKIGAI.countBook(500)<<endl;
    cout<<IKIGAI.isBookPresent('I')<<endl;
}
