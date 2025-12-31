/* Q1. Create a class ‘date’ that contains three members namely date,
month and year. Create 2 objects of this
class with different dates
and now compare the two. If the dates are equal then display
message as "Equal"
otherwise "Unequal". Use Getters & Setters.
*Note : The function should be a member function of this class.
*/

#include <iostream>
using namespace std;

class date {
private:
    int date;
    int month;
    int year;
public:
    void setInfo(int d, int m, int y){
        date = d;
        month = m;
        year = y;
    }

    int getD(){
        return date;
    };

    int getM(){
        return month;
    };
    int getY(){
        return year;
    }
};


void check(date a, date b){
    if ((a.getD() == b.getD()) & (a.getM() == b.getM()) & (a.getY() == b.getY())){
        cout<<"Yes they are equal."<<endl;
    }
    else cout<<"No"<<endl;
}

int main(){

    date today;
    today.setInfo(31,12,2025);
    date tomorrow;
    tomorrow.setInfo(1,1,2025);
    date todaynew;
    todaynew.setInfo(31,12,2025);

    check(today, tomorrow);

    check(today, todaynew);

}

/*

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    void setInfo(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Member function to compare dates
    void compare(const Date& other) const {
        if (day == other.day &&
            month == other.month &&
            year == other.year) {
            cout << "Equal" << endl;
        } else {
            cout << "Unequal" << endl;
        }
    }
};

int main() {
    Date today;
    today.setInfo(31, 12, 2025);

    Date tomorrow;
    tomorrow.setInfo(1, 1, 2025);

    Date todaynew;
    todaynew.setInfo(31, 12, 2025);

    today.compare(tomorrow);   // Unequal
    today.compare(todaynew);   // Equal

    return 0;
}


*/
