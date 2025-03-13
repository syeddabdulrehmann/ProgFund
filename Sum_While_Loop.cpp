#include <iostream>
using namespace std;
int main() 
{
    int sum = 0, count = 1;
    while (count <= 5) 
	{
        sum += count;
        count++;
    }
    cout << "Sum of first five numbers: " << sum << endl;
    return 0;
}
