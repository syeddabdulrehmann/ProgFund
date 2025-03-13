#include <iostream>
using namespace std;
int main() 
{
    int num;
    char choice;
    do 
	{
        cout << "Enter a number: ";
        cin >> num;
        cout << "Number entered: " << num << endl;
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    }
	while (choice == 'y' || choice == 'Y');
    return 0;
}

