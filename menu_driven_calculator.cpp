#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) 
{ 
    if (b == 0) 
	{
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b; 
}

int main() 
{
    int choice;
    double num1, num2;
    
    do {
        cout << "\nCalculator Menu:\n";
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) 
		{
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) 
		{
            case 1: cout << "Result: " << add(num1, num2) << endl; break;
            case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
            case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
            case 4: cout << "Result: " << divide(num1, num2) << endl; break;
            case 5: cout << "Exiting the program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } 
	while (choice != 5);
    
    return 0;
}
