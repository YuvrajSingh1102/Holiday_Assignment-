/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/
#include <iostream>

using namespace std;

class Employee{
    public:
    int salary;
    int hours;
    
    
    void getInfo(int x, int y) {
        salary = x;
        hours = y;
    }
    
    void AddSal() {
        if(salary < 500) {
            salary = salary + 10;
        }
    }
    
    void AddWork() {
        if(hours > 6) {
            salary = salary + 5;
        }
    }
    
    void final_salary() {
        cout << "Final salary of the empolyee is: " << salary;
    }
}emp1;

int main()
{
    int x, y;
    cout << "Enter the basic salary of the employee: " << endl;
    cin >> x;
    
    cout << "Enter the number of hours per day: " << endl;
    cin >> y;
    
    emp1.getInfo(x, y);
    emp1.AddSal();
    emp1.AddWork();
    emp1.final_salary();

    return 0;
}
