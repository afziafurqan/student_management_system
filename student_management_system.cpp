#include <iostream>
#include <string>
using namespace std;

struct Student {  //structure to store variables
    int rollNo;
    string name;
    float marks;
};

void addStudent(Student s[], int &n) {  //method for taking inputs
    cout << "Enter Roll No: ";
    cin >> s[n].rollNo;

    cout << "Enter Name: ";
    cin >> s[n].name;

    cout << "Enter Marks: ";
    cin >> s[n].marks;

    n++;
}

void displayStudents(Student s[], int n) {  //method to display output
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].rollNo << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
}

int main() {
    Student s[50];
    int choice;
    int n = 0;

    do {
        cout << "==== STUDENT MANAGEMENT SYSTEM ====" << endl;
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(s, n);
                break;

            case 2:
                displayStudents(s, n);
                break;

            case 3:
                cout << "Program Ended";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 3);

    return 0;
}
