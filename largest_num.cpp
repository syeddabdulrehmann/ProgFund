#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << " Enter the size of an array(N):";
	cin >> N;
	int a[N];
	cout << " Enter " << N << " elements: ";
	for(int i=0; i<N; i++)
	{
		cin >> a[N];
	}
	int largest = a[0];
	for(int i=1; i<N; i++)
	{
		if (a[i] > largest)
		{
	     	cout << " Largest number in the aray: " << a[i
			 ] << endl;
		}
	}
	return 0;
}
