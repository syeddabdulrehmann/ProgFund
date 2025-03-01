#include <iostream>
#include <iomanip>

using namespace std;

// Function to display the menu
void displayMenu() 
{
    cout << "----- Sahara Feast Menu -----\n";
    cout << "1. Couscous - $8.50\n";
    cout << "2. Tagine - $10.00\n";
    cout << "3. Pastilla - $12.00\n";
    cout << "4. Harira Soup - $6.50\n";
    cout << "5. Merguez Sausages - $9.00\n";
    cout << "Enter the item number to order (0 to finish): ";
}

// Function to calculate total cost of an item
double calculateCost(double price, int quantity) 
{
    return price * quantity;
}

// Function to calculate the final bill with tax
double calculateFinalBill(double subtotal, double taxRate) 
{
    return subtotal + (subtotal * taxRate / 100);
}

int main() 
{
    int choice, quantity;
    double subtotal = 0.0;
    const double TAX_RATE = 10.0;  // 10% tax

    do {
        displayMenu();
        cin >> choice;

        if (choice == 0) break;

        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice) 
		{
            case 1: subtotal += calculateCost(8.50, quantity); break;
            case 2: subtotal += calculateCost(10.00, quantity); break;
            case 3: subtotal += calculateCost(12.00, quantity); break;
            case 4: subtotal += calculateCost(6.50, quantity); break;
            case 5: subtotal += calculateCost(9.00, quantity); break;
            default: cout << "Invalid choice. Try again.\n"; continue;
        }

        cout << "Item added to bill.\n";

    }
	 while (true);

    double finalAmount = calculateFinalBill(subtotal, TAX_RATE);

    cout << fixed << setprecision(2);
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Final Bill (including " << TAX_RATE << "% tax): $" << finalAmount << endl;
    cout << "Thank you for dining at Sahara Feast!\n";

    return 0;
}

