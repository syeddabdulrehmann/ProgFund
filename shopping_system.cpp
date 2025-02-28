#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int category, quantity;
    double price = 0, total = 0, discount = 0, final_amount = 0;
    cout << "Select category (1 for Electronics, 2 for Clothing, 3 for Groceries): ";
    cin >> category;
    switch (category) 
	{
        case 1: 
		{
            int item;
            cout << "Choose item (1 for Laptop - $1000, 2 for Smartphone - $700, 3 for Headphones - $150): ";
            cin >> item;
            switch (item) 
			{
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default: cout << "Invalid item!" << endl; return 1;
            }
            break;
        }
        case 2: 
		{
            int item;
            cout << "Choose item (1 for Jacket - $120, 2 for T-shirt - $40, 3 for Jeans - $60): ";
            cin >> item;
            switch (item) 
			{
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default: cout << "Invalid item!" << endl; return 1;
            }
            break;
        }
        case 3: 
		{
            int item;
            cout << "Choose item (1 for Milk - $2, 2 for Bread - $3, 3 for Eggs - $5): ";
            cin >> item;
            switch (item) 
			{
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default: cout << "Invalid item!" << endl; return 1;
            }
            break;
        }
        default:
            cout << "Invalid category!" << endl;
            return 1;
    }
    cout << "Enter quantity: ";
    cin >> quantity;
    total = price * quantity;
    if (total >= 500) 
	{
        discount = 0.2 * total;
    }
	else if (total >= 100) 
	{
        discount = 0.1 * total;
    }
    final_amount = total - discount;
    cout << "Total Price: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Final Amount: $" << final_amount << endl;
    return 0;
}
