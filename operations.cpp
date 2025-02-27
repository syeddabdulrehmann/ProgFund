#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Enter two numbers"<<endl;
	cin>>num1>>num2;
	char operation;
	cout<<"Enter an operator(+,-,*,/,%)"<<endl;
	cin>>operation;
	switch(operation)
	{
	case '+':
	cout<<"Result="<<num1+num2<<endl;
	break;
	case '-':
	cout<<"Result="<<num1-num2<<endl;
	break;
	case '*':
	cout<<"Result="<<num1*num2<<endl;
	break;
	case '/':
	cout<<"Result="<<num1/num2<<endl;
	break;
	case '%':
	cout<<"Result="<<num1%num2<<endl;
	default:
	cout<<"Result="<<0<<endl;
	break;
	}
}

