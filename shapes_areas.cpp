#include <iostream>
using namespace std;
int main() 
{
    int choice;
    double area;
    cout << " Choose a shape (1 for Circle, 2 for Rectangle, 3 for Triangle): ";
    cin >> choice;
    switch (choice) 
	{
        case 1: 
		{
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of Circle: " << area << endl;
            break;
        }
        case 2: 
		{
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
            break;
        }
        case 3: 
		{
            double base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle: " << area << endl;
            break;
        }
        default:
            cout << "Error: Invalid shape!" << endl;
    }
    return 0;
}
