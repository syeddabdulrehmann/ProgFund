#include <iostream>
using namespace std;

int main() 
{
    int num = 42;
    void* ptr = &num; // Void pointer storing address of num

    cout << "Value using void pointer: " << *(static_cast<int*>(ptr)) << endl;

    return 0;
}

