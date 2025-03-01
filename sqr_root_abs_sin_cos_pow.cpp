#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square Root: " << sqrt(num) << endl;
    cout << "Absolute Value: " << fabs(num) << endl;
    cout << "Sine: " << sin(num) << endl;
    cout << "Cosine: " << cos(num) << endl;
    cout << "Power of 3: " << pow(num, 3) << endl;

    return 0;
}

