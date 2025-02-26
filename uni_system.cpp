#include<iostream>
using namespace std;
int main()
{
	int marksinphysics, marksinmath, marksinenglish;
	int totalmarks, scoredgrade, percentage;
	int scoredgradeA,B,C,D,F;
	cout << "enter marks in physics, marks in math, marks in english"<<endl;
	cin >> marksinphysics >> marksinmath >> marksinenglish;
	if(percentage>=90)
	{
		cout << "Grade A"<< endl;
	}
	else if(percentage>=80 && percentage<90)
	{
		cout << "Grade B"<< endl;
	}
	else if(percentage>=70 && percentage<80)
	{
		cout << "Grade C"<< endl;
	}
	else if(percentage>=60 && percentage<70)
	{
		cout << "Grade D"<<endl;
	}
	else
	{
		cout << "Grade F"<<endl;
	}
	if(totalmarks>=270)
	{
	    cout << "The student is eligible for merit scholarship"<<endl;
	}
	else if(totalmarks>=240) 
	{
		cout << "The student is eligible for regular scholarship"<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
