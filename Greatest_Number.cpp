#include <iostream>
using namespace std;
int main() 
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << "Greatest number: " << a << endl;
    else if (b >= a && b >= c)
        cout << "Greatest number: " << b << endl;
    else
        cout << "Greatest number: " << c << endl;
    return 0;
}
