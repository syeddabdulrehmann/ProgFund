#include <iostream>
using namespace std;
int main()
{
    char signal;
    cout << "Enter the signal color (R, G, Y): ";
    cin >> signal;
    if (signal == 'R' || signal == 'r')
	{
        cout << "Red: Stop" << endl;
    }
    if (signal == 'G' || signal == 'g')
	{
        cout << "Green: Go" << endl;
    }
    if (signal == 'Y' || signal == 'y')
	{
        cout << "Yellow: Slow Down" << endl;
    }
    return 0;
}
