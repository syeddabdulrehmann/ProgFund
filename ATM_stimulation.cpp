#include <iostream>
using namespace std;
int main() 
{
    double account_balance, withdrawal_amount;
    cout << " Enter your account balance: ";
    cin >> account_balance;
    cout << " Enter the withdrawal amount: ";
    cin >> withdrawal_amount;
    if (withdrawal_amount <= account_balance) 
	{
        account_balance -= withdrawal_amount;
        cout << " Withdrawal successful. Remaining balance: " << account_balance << endl;
    }
	 else 
	{
        cout << " Insufficient balance." << endl;
    }
    return 0;
}
