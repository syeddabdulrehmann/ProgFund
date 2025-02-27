#include<iostream>
using namespace std;
int main()
{
    char day;
	cout<<"Enter day"<<endl;
	cin>>day;
	switch(day)
	{
	case 'Mon':
	cout<<"Today is Monday"<<endl;
	break;
	case 'Tues':
	cout<<"Today is Tuesday"<<endl;
	break;
	case 'Wed':
	cout<<"Today is Wednesday"<<endl;
	break;
	case 'Thurs':
	cout<<"Today is Thursday"<<endl;
	break;
	case 'Fri':
	cout<<"Today is Friday"<<endl;
	break;
	case 'Satur':
	cout<<"Today is Saturday"<<endl;
	break;
	case 'Sun':
	cout<<"Today is Sunday"<<endl;
	break;
	default:
	cout<<"Today is incorrect"<<endl;
	break;	
    }
}
