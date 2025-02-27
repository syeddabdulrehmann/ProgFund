#include<iostream>
using namespace std;
int main()
{
	char area;
	cout<<"Enter area of Circle, Triangle, Rectangle"<<endl;
	cin>>area;
	const int pie=3.14;
	char r,b,h,l,w;
	switch(area)
	{
	case 'Circle':
	cout<<"Area of Circle="<<pie*(r^2)<<endl;
	break;
	case 'Triangle':
	cout<<"Area of Triangle="<<1/2*b*h<<endl;
	break;
	case 'Rectangle':
	cout<<"Area of Rectangle="<<l*w<<endl;
	break;
	}
}
