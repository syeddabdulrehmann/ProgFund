#include<iostream>
using namespace std;
int main()
{
	double balance;
	int loyalty;
	cout << " Enter account balance: ";
	cin >> balance;
	cout << " Enter loyalty status (1 for loyal, 0 for not loyal): ";
	cin >> loyalty;
	string account_type = (balance < 100) ? " Low Balance " : (balance <= 500) ? " Standard Account" : " Premium Account ";
	string special_offer = (balance > 200 && loyalty == 1) ? " Eligible " : " Not Eligible";
	cout << " Account Type: " << account_type << endl;
	cout << " Special Offer: " << special_offer << endl;
	return 0;
}
