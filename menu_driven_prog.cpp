#include <iostream>
using namespace std;
int main() 
{
    int choice;
    double balance = 1000, amount;
    do 
	{
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
		{
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) 
				{
                    balance += amount;
                    cout << "Amount deposited successfully!\n";
                } 
				else 
				{
                    cout << "Invalid amount!\n";
                }
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) 
				{
                    balance -= amount;
                    cout << "Amount withdrawn successfully!\n";
                } 
				else 
				{
                    cout << "Invalid or insufficient balance!\n";
                }
                break;
            case 3:
                cout << "Current balance: $" << balance << endl;
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
	while (choice != 4);
    return 0;
}
