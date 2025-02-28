#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {2, 4, 6, 8, 10, 12};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of the array: " << length << endl;

    return 0;
}
