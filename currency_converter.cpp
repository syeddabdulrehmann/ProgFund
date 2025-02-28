#include <iostream>
using namespace std;
int main() 
{
    double usd, converted;
    int choice;
    cout << "Enter amount in USD: ";
    cin >> usd;
    cout << "Choose the currency to convert to (1 for PKR, 2 for INR, 3 for Euros): ";
    cin >> choice;
    switch (choice) 
	{
        case 1:
            converted = usd * 280;
            cout << "Converted amount in PKR: " << converted << endl;
            break;
        case 2:
            converted = usd * 80;
            cout << "Converted amount in INR: " << converted << endl;
            break;
        case 3:
            converted = usd * 0.9; 
            cout << "Converted amount in Euros: " << converted << endl;
            break;
        default:
            cout << "Error: Invalid currency!" << endl;
    }
    return 0;
}
