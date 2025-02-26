#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout << "enter two numbers:\n";
	cout << "number1: ";
	cin >> num1;
	cout << "number2: ";
	cin >> num2;
	int addition = num1 + num2;
	int subtraction = num1 - num2;
	int multiplication = num1 * num2;
	int division = num1 / num2;
	int modulus = num1 % num2;
	cout << "addition: " << num1 << " + " << num2 << " = " << addition << endl;
	cout << "subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
	cout << "mutliplication: " << num1 << " * " << num2 << " = " << multiplication << endl;
	cout << "division: " << num1 << " / " << num2 << " = " << division << endl;
	cout << "modulus: " << num1 << " % " << num2 << " = " << modulus << endl;
	return 0;
}
