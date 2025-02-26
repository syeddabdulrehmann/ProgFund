#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double weight, height, bmi;
	cout << "BMI Calculator\n";
	cout << "enter your weight in kilograms: ";
	cin >> weight;
	cout << "enter your height in meters: ";
	cin >> height;
	bmi = weight / (height * height);
	cout << fixed << setprecision(4);
	cout << "your bmi is: " << bmi << endl;
	return 0;
}
