/*1. Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining Assume that there are not more than 450 
students in the college.
? Print names of all students who joined in a particular year.
? Print the data of a student whose roll number is given.*/
#include <iostream>
#include <string>
using namespace std;
struct Student {
    int rollNumber;
    string name;
    string department;
    string course;
    int yearOfJoining;
};
int main() {
    Student students[450];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> students[i].rollNumber;

        cin.ignore(); 
        cout << "Name: ";
        getline(cin, students[i].name);

        cout << "Department: ";
        getline(cin, students[i].department);

        cout << "Course: ";
        getline(cin, students[i].course);

        cout << "Year of Joining: ";
        cin >> students[i].yearOfJoining;
    }

    
    int year;
    cout << "\nEnter year to display students who joined: ";
    cin >> year;

    cout << "\nStudents who joined in " << year << ":\n";
    for (int i = 0; i < n; i++) {
        if (students[i].yearOfJoining == year) {
            cout << students[i].name << endl;
        }
    }

    // Print data of student with given roll number
    int roll;
    cout << "\nEnter roll number to search: ";
    cin >> roll;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == roll) {
            cout << "\nStudent Details:\n";
            cout << "Roll Number: " << students[i].rollNumber << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Department: " << students[i].department << endl;
            cout << "Course: " << students[i].course << endl;
            cout << "Year of Joining: " << students[i].yearOfJoining << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent with roll number " << roll << " not found.\n";
    }

    return 0;
}
