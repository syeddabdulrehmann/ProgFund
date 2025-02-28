#include <iostream>
using namespace std;
int main() 
{
    int num;    
    do 
	{
        cout << "Enter a positive number: ";
        cin >> num;    
        if (num <= 0) 
		{
            cout << "Error! Please enter a valid positive number." << endl;
        }
    }
	while (num <= 0);
    cout << " You entered: " << num << endl;
    return 0;
}
