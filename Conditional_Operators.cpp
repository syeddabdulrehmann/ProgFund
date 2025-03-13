#include <iostream>
using namespace std;
int main() 
{
    char gender;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << ((gender == 'M' || gender == 'm') ? "Male" : "Female") << endl;
    return 0;
}

