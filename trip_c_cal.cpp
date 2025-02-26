#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double distance, fuel_efficiency, fuel_cost_per_litre, total_cost;
	cout << "trip cost estimator\n";
	cout << "enter distance of the trip in kilometers: ";
	cin >> distance;
	cout << "enter vechiles's fuel efficiency (km per litre):";
	cin >> fuel_efficiency;
	cout << "enter fuel cost per litre in PKR:";
	cin >> fuel_cost_per_litre;
	total_cost = (distance / fuel_efficiency) * fuel_cost_per_litre;
	cout << fixed << setprecision(2);
	cout << "total trip cost: rs " << total_cost << endl;
	return 0;
}
