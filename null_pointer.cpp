#include <iostream>
using namespace std;

int main() 
{
    int *ptr = NULL;  // Pointer initialized to nullptr
    if (ptr == NULL) 
	{
        cout << "Pointer is null and does not point to any memory." << endl;
    }
	else 
	{
        cout << "Pointer holds address: " << ptr << endl;
    }

    return 0;
}

