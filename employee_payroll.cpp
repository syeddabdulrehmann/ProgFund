#include <iostream>
using namespace std;
int main()
{
    char grade;
    int years_of_service;
    double basic_salary, bonus = 0, gross_salary, tax = 0, net_salary;
    cout << " Enter employee grade (A, B, C): ";
    cin >> grade;
    cout << " Enter years of service: ";
    cin >> years_of_service;
    
    if (grade == 'A' || grade == 'a') 
	{
        basic_salary = 50000;
    }
    if (grade == 'B' || grade == 'b')
	{
        basic_salary = 30000;
    }
    if (grade == 'C' || grade == 'c')
	{
        basic_salary = 20000;
    }

    if (years_of_service >= 10)
	{
        bonus = 0.1 * basic_salary;
    }
    if (years_of_service >= 5 && years_of_service < 10)
	{
        bonus = 0.05 * basic_salary;
    }

    gross_salary = basic_salary + bonus;

    if (gross_salary > 40000) 
	{
        tax = 0.2 * gross_salary;
    }
    if (gross_salary >= 30000 && gross_salary <= 40000) 
	{
        tax = 0.1 * gross_salary;
    }

    net_salary = gross_salary - tax;

    cout << "Net Salary: " << net_salary << endl;

    return 0;
}
