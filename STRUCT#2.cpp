#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    int id;
    string name;
    float salary;
};

void inputEmployeeData(Employee* emp) 
{
    cout << "Enter Employee ID: ";
    cin >> emp->id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, emp->name);
    cout << "Enter Employee Salary: ";
    cin >> emp->salary;
}

void displayEmployeeData(Employee* emp) 
{
    cout << "\nEmployee ID: " << emp->id << endl;
    cout << "Employee Name: " << emp->name << endl;
    cout << "Employee Salary: " << emp->salary << endl;
}

int main() 
{
    Employee* emp = new Employee;
    inputEmployeeData(emp);
    displayEmployeeData(emp);
    delete emp;

    return 0;
}

