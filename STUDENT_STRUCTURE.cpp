#include <iostream>
#include <string>
using namespace std;

// Structure definition
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student info
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Single structure variable
    Student s1;
    s1.firstName = "Muhammad";
    s1.lastName = "Abdulrehman";
    s1.rollNumber = 18;
    s1.marks = 85.5;
    cout << "Single Student Info:\n";
    s1.displayStudentInfo();
    cout << "\n";

    // Array of structures
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Student students[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\nMultiple Students Info:\n";
    for (int i = 0; i < numStudents; ++i) {
        students[i].displayStudentInfo();
        cout << "\n";
    }

    // Pointer to structure
    Student *ptr = new Student;
    cout << "Enter details for student using pointer:\n";
    cout << "First Name: ";
    cin >> ptr->firstName;
    cout << "Last Name: ";
    cin >> ptr->lastName;
    cout << "Roll Number: ";
    cin >> ptr->rollNumber;
    cout << "Marks: ";
    cin >> ptr->marks;

    cout << "\nPointer Student Info:\n";
    ptr->displayStudentInfo();

    delete ptr; // Free allocated memory

    return 0;
}

