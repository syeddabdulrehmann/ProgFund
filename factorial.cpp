#include <iostream>
using namespace std;

long long factorial(int num) 
{
    long long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
