#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout << "Enter temp"<<endl;
	cin >> temp;
	if(temp>=40)
	{
		cout << "Stay indoor because it is extremely outside"<<endl;
	}
	else if(temp>=30 && temp<=39)
	{
		cout << "Drink plenty of water to stay hydrated in hot weather"<<endl;
	}
	else if(temp>=20 && temp<=29)
	{
		cout << "The weather is pleasant and suitable for outdoor activities"<<endl;
	}
	else
	{
		cout << "Wear warm clothes to stay comfortable in the outdoor weather"<<endl;
	}
	return 0;
}
