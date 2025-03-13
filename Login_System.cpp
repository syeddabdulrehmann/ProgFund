#include <iostream>
using namespace std;
int main() 
{
    string username, password;
    do 
	{
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
    }
	while (username != "admin" || password != "1234");
    cout << "Login successful!" << endl;
    return 0;
}
