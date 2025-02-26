#include<iostream>
using namespace std;
int main()
{
	int a[3]={3,6,9};
	int length= sizeof(a) / sizeof(a[1]);
	cout << " Length of an array " << length << endl;
	return 0;
}
