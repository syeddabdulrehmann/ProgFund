#include <iostream>
using namespace std;
int main() 
{
    // Declare variable for temperature in Celsius
    double celsius;

    // Constant for Kelvin conversion
    const double KELVIN_CONSTANT = 273.15;

    // Taking user input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Converting to Fahrenheit and Kelvin
    double fahrenheit = (celsius * 9 / 5) + 32;
    double kelvin = celsius + KELVIN_CONSTANT;

    // Displaying results
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    cout << "Temperature in Kelvin: " << kelvin << "K" << endl;

    return 0;
}

