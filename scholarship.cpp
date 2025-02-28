#include <iostream>
using namespace std;
int main() 
{
    float subject1, subject2, subject3;
    float totalMarks, percentage;
    char grade;
    bool failed = false;
    cout << " Enter marks for subject 1: ";
    cin >> subject1;
    cout << " Enter marks for subject 2: ";
    cin >> subject2;
    cout << " Enter marks for subject 3: ";
    cin >> subject3;
    if (subject1 < 60 || subject2 < 60 || subject3 < 60) 
	{
        cout << "Failed" << endl;
        return 0; 
    }
    totalMarks = subject1 + subject2 + subject3;
    percentage = (totalMarks / 300) * 100;
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else grade = 'F';
    cout << " Total Marks: " << totalMarks << endl;
    cout << " Percentage: " << percentage << "%" << endl;
    cout << " Grade: " << grade << endl;
    if (subject1 >= 90 && subject2 >= 90 && subject3 >= 90 && totalMarks > 270) 
	{
        cout << " Eligible for Merit Scholarship" << endl;
    } 
	else if (subject1 >= 80 && subject2 >= 80 && subject3 >= 80 && totalMarks >= 240) 
	{
        cout << "Eligible for Regular Scholarship" << endl;
    }
	else 
	{
        cout << "Not eligible for any scholarship" << endl;
    }
    return 0;
}
