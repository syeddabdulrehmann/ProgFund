#include<iostream>
#include<string>
using namespace std;
int main()
{
	const string correctPassword = "secure123"; 
	string enteredPassword;
	do
	{
		cout << " Enter the correct password:";
		cin >> enteredPassword;
		if(enteredPassword != correctPassword)
		{
			cout << " Incorrect password. Try again." <<endl;
		}
    }
		while (enteredPassword != correctPassword);
		cout << " Access granted!" << endl;
		return 0;
	}

