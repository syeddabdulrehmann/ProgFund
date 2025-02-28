#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string correct_username = "admin";
    string correct_password = "12345";
    string username, password;
    cout << " Enter username: ";
    cin >> username;
    cout << " Enter password: ";
    cin >> password;
    if (username == correct_username && password == correct_password) 
	{
        cout << "Access Granted." << endl;
    }
	 else if (username == correct_username && password != correct_password) 
	{
        cout << "Wrong Password." << endl;
    }
	else 
	{
        cout << "User Not Found." << endl;
    }
    return 0;
}
