//               PROGRAM 1
//#include <iostream>
//using namespace std;
//
//// Recursive function to calculate sum of first n numbers
//int sum(int n) 
//{
//    // Base case
//    if (n == 0) 
//	{
//        return 0;
//    }
//    // Recursive case: sum of n is n + sum of (n-1)
//    else 
//	{
//        return n + sum(n - 1);
//    }
//}
//
//int main() 
//{
//    int n;
//
//    // Asking user for input
//    cout << "Enter the value of n: ";
//    cin >> n;
//
//    // Calling the recursive function to calculate sum
//    int result = sum(n);
//
//    // Output the result
//    cout << "The sum of first " << n << " numbers is: " << result << endl;
//
//    return 0;
//}
//                      
//                      // PROGRAM 2
//    #include <iostream>
//using namespace std;
//
//// Function to swap two numbers using reference
//void swap(int &a, int &b) 
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//
//int main() 
//{
//    int x, y;
//
//    cout << "Enter two numbers: ";
//    cin >> x >> y;
//
//    // Displaying values before swap
//    cout << "Before swap: x = " << x << ", y = " << y << endl;
//
//    // Calling the swap function
//    swap(x, y);
//
//    // Displaying values after swap
//    cout << "After swap: x = " << x << ", y = " << y << endl;
//
//    return 0;
//}
//                PROGRAM 3
  #include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b)
 {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b)
 {
    return a + b;
}

// Function to add an integer and a floating-point number
float add(int a, float b)
 {
    return a + b;
}

// Function to add a floating-point number and an integer
float add(float a, int b)
 {
    return a + b;
}

int main() 
{
    int choice;
    cout << "Basic Calculator" << endl;
    cout << "Choose operation:" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add two floating-point numbers" << endl;
    cout << "3. Add an integer and a floating-point number" << endl;
    cout << "4. Add a floating-point number and an integer" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1) 
	{
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Result: " << add(x, y) << endl;
    } 
    else if (choice == 2)
	 {
        float x, y;
        cout << "Enter two floating-point numbers: ";
        cin >> x >> y;
        cout << "Result: " << add(x, y) << endl;
    } 
    else if (choice == 3) 
	{
        int x;
        float y;
        cout << "Enter an integer and a floating-point number: ";
        cin >> x >> y;
        cout << "Result: " << add(x, y) << endl;
    } 
    else if (choice == 4)
	 {
        float x;
        int y;
        cout << "Enter a floating-point number and an integer: ";
        cin >> x >> y;
        cout << "Result: " << add(x, y) << endl;
    } 
    else
	 {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

