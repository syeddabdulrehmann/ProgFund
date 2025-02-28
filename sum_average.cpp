#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {5, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < n; i++) 
	{
        sum += arr[i];
    }

    float average = (float)sum / n;
    
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
