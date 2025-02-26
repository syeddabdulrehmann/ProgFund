#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	string username;
	int password;
	cout << "Enter username and password"<<endl;
	getline(cin,username);
	cin >> password;
	if(username=="admin" && password==12345)
	{
		cout << "Access Granted"<<endl;
	}
	else if(username=="admin" && password!=12345)
	{
		cout << "Wrong Password" <<endl;
	}
	else
	{
		cout << "User Not Found" <<endl;
	}
	return 0;
}
