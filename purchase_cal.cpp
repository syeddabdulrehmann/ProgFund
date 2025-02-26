#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	const double item1 = 12.95, item2 = 24.95, item3 = 6.95, item4 = 14.95, item5 = 3.95;
	double subtotal = item1 + item2 + item3 + item4 + item5;
	const double tax_rate = 0.06;
	double sales_tax = subtotal * tax_rate;
	double total = subtotal + sales_tax;
	cout << fixed << setprecision(2);
	cout << "price of item1: $" << item1 << endl;
	cout << "price of item2; $" << item2 << endl;
	cout << "price of item3; $" << item3 << endl;
	cout << "price of item4; $" << item4 << endl;
	cout << "price of item5; $" << item5 << endl;
	cout << "subtotal: $" << subtotal << endl;
	cout << "sales tax: $" <<sales_tax << endl;
	cout << "total: $" << total << endl;
}
