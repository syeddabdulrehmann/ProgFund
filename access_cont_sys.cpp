#include <iostream>
#include <string>
using namespace std;
void accessControlSystem(string username, string password, string role) 
{
    string predefinedUsername = "admin";
    string predefinedPassword = "password123";
    if (username == predefinedUsername && password == predefinedPassword) 
	{
        cout << "Authentication Successful!" << endl;
        if (role == "Admin") 
		{
            cout << "Full Access" << endl;
        }
		else if (role == "Guest") 
		{
            cout << "Limited Access" << endl;
        } 
		else 
		{
            cout << "No Access" << endl;
        }
    }
	 else 
	{
        cout << "Authentication Failed. Access Denied." << endl;
    }
}
int main() 
{
    accessControlSystem("admin", "password123", "Admin");
    accessControlSystem("admin", "password123", "Guest");
    accessControlSystem("admin", "password123", "User");
    accessControlSystem("user", "pass", "Guest");
    return 0;
}
