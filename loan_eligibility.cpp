#include <iostream>
using namespace std;
int main()
{
    double salary;
    int experience;
    cout << " Enter your salary: ";
    cin >> salary;
    cout << " Enter your years of work experience: ";
    cin >> experience;
    if (salary >= 25000 || experience > 5) 
	{
        cout << "Eligible for loan." << endl;
    }
	else 
	{
        cout << "Not eligible for loan." << endl;
    }
    return 0;
}
