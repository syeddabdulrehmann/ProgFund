#include<iostream>
using namespace std;
int main()
{
	int a[3]={3,6,9};
	cout << " Array Elements " << endl;
	int size = sizeof(a)/ sizeof(a[0]);
	int sum=0;
	for(int i=0; i<size; i++)
	{
		sum+= a[i];
	}
	double average =(double)sum / size;    // Type Casting
	cout << " Sum of array elements:" << sum << endl;
	cout << " Average of array elements:" << average << endl;
	return 0;
}
