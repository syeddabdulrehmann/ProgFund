#include<iostream>
using namespace std;
int main()
{
	int N;
	cout << " Enter the size of an array(N): ";
	cin >> N;
	int a[N];
	cout << "Enter " << N << " integers: ";
	for(int i=0; i<N; i++)
	{
		cin >> a[i];
	}
	cout << "Array elements in reverse order:";
	for(int i=N-1; i>=0; i--)
	{
		cout << a[i];
    }
	return 0;
}
