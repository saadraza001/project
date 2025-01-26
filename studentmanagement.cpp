#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students allowed

class Student {
public:
    int rollNo;
    string name;
    int age;
    string grade;
};

class SchoolManagementSystem {
private:
    Student students[MAX_STUDENTS];
    int studentCount;

public:
    SchoolManagementSystem() {
        studentCount = 0;
    }

    void addStudent(int rollNo, string name, int age, string grade) {
        if (studentCount < MAX_STUDENTS) {
            students[studentCount].rollNo = rollNo;
            students[studentCount].name = name;
            students[studentCount].age = age;
            students[studentCount].grade = grade;
            studentCount++;
            cout << "Student added successfully!" << endl;
        } else {
            cout << "Student limit reached! Cannot add more students." << endl;
        }
    }

    void displayStudents() {
        if (studentCount == 0) {
            cout << "No student records available." << endl;
        } else {
            for (int i = 0; i < studentCount; i++) {
                cout << "Roll No: " << students[i].rollNo << endl;
                cout << "Name: " << students[i].name << endl;
                cout << "Age: " << students[i].age << endl;
                cout << "Grade: " << students[i].grade << endl;
                cout << "--------------------------" << endl;
            }
        }
    }

    void deleteStudent(int rollNo) {
        bool found = false;
        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNo == rollNo) {
                // Shift students down to delete the student
                for (int j = i; j < studentCount - 1; j++) {
                    students[j] = students[j + 1];
                }
                studentCount--;
                cout << "Student with Roll No " << rollNo << " deleted successfully!" << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with Roll No " << rollNo << " not found." << endl;
        }
    }

    void searchStudent(int rollNo) {
        bool found = false;
        for (int i = 0; i < studentCount; i++) {
            if (students[i].rollNo == rollNo) {
                cout << "Roll No: " << students[i].rollNo << endl;
                cout << "Name: " << students[i].name << endl;
                cout << "Age: " << students[i].age << endl;
                cout << "Grade: " << students[i].grade << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Student with Roll No " << rollNo << " not found." << endl;
        }
    }
};

int main() {
    SchoolManagementSystem sms;
    int choice;

    do {
        cout << "\n---- School Management System ----\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Search Student\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int rollNo, age;
            string name, grade;
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cin.ignore();  // To clear the buffer
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cin.ignore();  // To clear the buffer
            cout << "Enter Grade: ";
            getline(cin, grade);
            sms.addStudent(rollNo, name, age, grade);
        } else if (choice == 2) {
            sms.displayStudents();
        } else if (choice == 3) {
            int rollNo;
            cout << "Enter Roll No of student to delete: ";
            cin >> rollNo;
            sms.deleteStudent(rollNo);
        } else if (choice == 4) {
            int rollNo;
            cout << "Enter Roll No to search: ";
            cin >> rollNo;
            sms.searchStudent(rollNo);
        } else if (choice == 5) {
            cout << "Exiting system..." << endl;
        } else {
            cout << "Invalid choice. Please try again!" << endl;
        }

    } while (choice != 5);

    return 0;
}