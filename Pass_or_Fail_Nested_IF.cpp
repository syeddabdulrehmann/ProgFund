#include <iostream>
using namespace std;
int main() 
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 50) 
	{
        if (marks >= 90)
            cout << "Pass with distinction" << endl;
        else
            cout << "Pass" << endl;
    }
	else
        cout << "Fail" << endl;
    return 0;
}

