/* Q2. Create a class to specify data on students with these attributes:
Roll number, Name, Department, Course,
Year of joining. Create
2 class variables. Now, create a member function to check if two
students have the same Department.
*/

#include <iostream>
using namespace std;

class StudentInfo {
private:
    int roll;
    string name;
    string dept;
    string course;
    string joining;
public:
    void setInfo (int r, string n, string d, string c, string j){
        roll = r;
        name = n;
        dept = d;
        course = c;
        joining = j;
    };

    void compare(const StudentInfo& other) const {
        if (dept == other.dept) cout<<"Yes they are same"<<endl;
        else cout<<"No not same"<<endl;
    };

};


int main () {

    StudentInfo mayur;
    mayur.setInfo(21, "Mayur", "IT", "Computer", "01-04-2020");

    StudentInfo neha;
    neha.setInfo(20, "Neha", "IT", "Computer", "01-04-2020");

    mayur.compare(neha);
}
