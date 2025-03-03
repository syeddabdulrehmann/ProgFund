#include<iostream>
using namespace std;
int main()
{
	double length , width ;
	double area = length * width ;
	const int multiplier = 2;
	double perimeter = multiplier * ( length + width ) ;
	cout << " Enter length:" << length << endl;
	cin >> length;
	cout << " Enter width: " << perimeter << endl;
	cin >> width ;
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declare variables for length and width
//    double length, width;
//    
//    // Constants for calculation
//    const int MULTIPLIER = 2;
//    
//    // Taking user input
//    cout << "Enter the length of the rectangle: ";
//    cin >> length;
//    cout << "Enter the width of the rectangle: ";
//    cin >> width;
//
//    // Calculating area and perimeter
//    double area = length * width;
//    double perimeter = MULTIPLIER * (length + width);
//
//    // Displaying results
//    cout << "Area of the rectangle: " << area << endl;
//    cout << "Perimeter of the rectangle: " << perimeter << endl;
//
//    return 0;
//}

