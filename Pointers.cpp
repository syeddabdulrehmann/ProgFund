#include <iostream>
using namespace std;

int main() 
{
    int num = 10;  // Variable declaration
    int *ptr = &num;  // Pointer initialization with the address of num

    cout << "Value of num: " << num << endl;  // Printing value of num
    cout << "Address of num: " << &num << endl;  // Printing address of num
    cout << "Value of ptr (address stored): " << ptr << endl;  // Printing address stored in pointer
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing pointer to get value

    return 0;
}
