#include <iostream>
using namespace std;

int main() 
{
    int num = 20;
    int* ptr = &num;

    cout << "Original value: " << num << endl;
    *ptr = 50;  // Modifying value using pointer
    cout << "Modified value: " << num << endl;

    return 0;
}

