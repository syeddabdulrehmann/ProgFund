#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
        cout << "Even number" << endl;
    else
        cout << "Odd number" << endl;
    return 0;
}
