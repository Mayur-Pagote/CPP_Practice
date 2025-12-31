/*
Q4. Create a class ‘Employee’ with following data members :

Class should have following member functions:

Create 5 objects of Employee and write functions to calculate
Ä NameÁ
Ä Employee IDÁ
Ä Salary

Ä averageWage() : To return the average salary of all employeesÁ
Ä maxSalary() : To return the employee whose salary is maximum
Ä Display() : To display the characteristics of each employee
*/

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empID;
    int salary;
public:
    void setInfo(string n, int e, int s){
        name = n;
        empID = e;
        salary = s;
    };

    void averageWage (Employee x[], int n){
        int count = 0;
        for (int i = 0; i<n; i++) count += x[i].salary;
        cout<< "Average Wages are: "<<count/n<<endl;
    };

    void maxSalary(Employee x[], int n){
        int count = 0;
        for (int i = 0; i<n; i++) {
            if (count < x[i].salary) count = x[i].salary;
        }
        cout<< "Max Salary is: "<<count<<endl;
    };

    void Display (Employee x) {
        cout<<"Name is "<<x.name<<" has "<<x.salary<<" as salary and employee ID is "<<x.empID;
    }
};

int main () {
    Employee emp[5];
    emp[0].setInfo("Amit", 101, 30000);
    emp[1].setInfo("Neha", 102, 35000);
    emp[2].setInfo("Rahul", 103, 28000);
    emp[3].setInfo("Sneha", 104, 40000);
    emp[4].setInfo("Mayur", 105, 32000);

    emp->averageWage(emp, 5);
    emp->maxSalary(emp, 5);

    emp->Display(emp[4]);
}

