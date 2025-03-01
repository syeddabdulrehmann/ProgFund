#include <iostream>
using namespace std;

int main() 
{
    int num = 10;      // Declare and initialize integer
    int* ptr = &num;   // Pointer stores address of num

    cout << "Value of num: " << *ptr << endl;
	 
    return 0;
}

