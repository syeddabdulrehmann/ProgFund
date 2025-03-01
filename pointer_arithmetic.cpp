#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr; 

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) 
	{
        cout << *(ptr + i) << " ";  // Pointer arithmetic
    }
    cout << endl;

    return 0;
}

