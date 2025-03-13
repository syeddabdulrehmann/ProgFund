#include <iostream>
using namespace std;
int main() 
{
    string city;
    cout << "Enter city name: ";
    cin >> city;
    if (city == "NewYork")
        cout << "Discount: 10%" << endl;
    else if (city == "Paris")
        cout << "Discount: 15%" << endl;
    else
        cout << "Discount: 5%" << endl;
    return 0;
}

