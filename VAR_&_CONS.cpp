#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 19;                 // Whole number
    float price = 4.99;           // Small decimal
    double pi = 3.1415926535;     // More precise decimal
    char grade = 'A';             // Single character
    bool isPassed = true;         // True/False value
    string name = "ABDULREHMAN";         // Text
    
    const int DAYS = 7;           // Fixed value (constant)

    // Display values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Price: " << price << endl;
    cout << "PI: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << isPassed << endl;
    cout << "Days in a week: " << DAYS << endl;

    return 0;
}

