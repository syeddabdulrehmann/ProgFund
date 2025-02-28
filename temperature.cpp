#include <iostream>
using namespace std;
int main() 
{
    float temperature;
    cout << " Enter the temperature in °C: ";
    cin >> temperature;
    if (temperature >= 40) 
	{
        cout << "It's extremely hot. Stay indoors to avoid health risks." << endl;
    }
	 else if (temperature >= 30 && temperature <= 39) 
	{
        cout << "It's hot. Stay hydrated by drinking plenty of water." << endl;
    }
	 else if (temperature >= 20 && temperature <= 29) 
	{
        cout << "The weather is pleasant and suitable for outdoor activities." << endl;
    } 
	else 
	{
        cout << "It's cool. Wear warm clothes to stay comfortable." << endl;
    }
    return 0;
}
