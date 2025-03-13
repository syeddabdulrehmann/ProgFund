#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Structure to hold menu items
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void displayMenu(const MenuItem menu[], int size) {
    cout << "\n------ Menu ------\n";
    for (int i = 0; i < size; ++i) {
        cout << i + 1 << ". " << menu[i].name << " - Rs. " << fixed << setprecision(2) << menu[i].price << endl;
    }
}

// Function to take orders
void takeOrder(const MenuItem menu[], int size, double &totalBill, ofstream &receipt) {
    int choice, quantity;
    char moreOrder;

    do {
        cout << "\nEnter item number to order: ";
        cin >> choice;
        if (choice < 1 || choice > size) {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        if (quantity <= 0) {
            cout << "Invalid quantity! Try again.\n";
            continue;
        }

        double itemTotal = menu[choice - 1].price * quantity;
        totalBill += itemTotal;
        cout << "Added " << quantity << " x " << menu[choice - 1].name << " to your order.\n";

        // Write to receipt
        receipt << quantity << " x " << menu[choice - 1].name << " - Rs. " << itemTotal << endl;

        cout << "Do you want to order more? (y/n): ";
        cin >> moreOrder;

    } while (moreOrder == 'y' || moreOrder == 'Y');
}

// Function to apply discounts
void applyDiscount(double &totalBill, ofstream &receipt) {
    double discount = 0.0;
    int festivalChoice;
    cout << "\nAre you ordering during a festival?\n";
    cout << "1. Eid-ul-Fitr (15% Discount)\n";
    cout << "2. Eid-ul-Adha (20% Discount)\n";
    cout << "3. No Festival\n";
    cout << "Enter your choice: ";
    cin >> festivalChoice;

    if (festivalChoice == 1) {
        discount = totalBill * 0.15; // 15% Discount
    } else if (festivalChoice == 2) {
        discount = totalBill * 0.20; // 20% Discount
    }

    if (totalBill > 1000) {
        discount += totalBill * 0.05; // Additional 5% Discount for orders above Rs. 1000
    }

    totalBill -= discount;
    cout << "Discount Applied: Rs. " << discount << endl;
    receipt << "Discount Applied: Rs. " << discount << endl;
}

int main() {
    // Define menu
    MenuItem turkishMenu[] = {
        {"Adana Kebab", 450},
        {"Iskender Kebab", 500},
        {"Lahmacun", 250},
        {"Baklava", 300},
        {"Kunafa", 350},
        {"Turkish Tea", 100},
        {"Ayran", 150}
    };

    const int menuSize = sizeof(turkishMenu) / sizeof(turkishMenu[0]);
    double totalBill = 0.0;

    // Open receipt file
    ofstream receipt("receipt.txt");
    if (!receipt) {
        cout << "Error creating receipt file!\n";
        return 1;
    }

    cout << "Welcome to IstanBill - Turkish Restaurant Billing System!\n";
    
    displayMenu(turkishMenu, menuSize);
    takeOrder(turkishMenu, menuSize, totalBill, receipt);
    
    applyDiscount(totalBill, receipt);

    cout << "Your Final Bill: Rs. " << totalBill << endl;
    receipt << "Final Bill: Rs. " << totalBill << endl;

    cout << "Thank you for dining with us!\n";
    receipt << "Thank you for dining with us!\n";
    
    receipt.close();
    return 0;
}
