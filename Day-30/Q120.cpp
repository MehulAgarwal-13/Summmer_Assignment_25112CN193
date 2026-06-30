#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int roll[MAX];
string name[MAX];
float marks[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        cout << "\nRecord is Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[count];
    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name[count]);

    cout << "Enter Marks: ";
    cin >> marks[count];

    count++;
    cout << "\nStudent Added Successfully!\n";
}

void displayStudents() {
    if (count == 0) {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n-----------------------------------------------\n";
    cout << "Roll No\tName\t\tMarks\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < count; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

void searchStudent() {
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> r;

    for (int i = 0; i < count; i++) {
        if (roll[i] == r) {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << roll[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

void updateStudent() {
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Update: ";
    cin >> r;

    for (int i = 0; i < count; i++) {
        if (roll[i] == r) {
            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            cout << "\nRecord Updated Successfully!\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

void deleteStudent() {
    int r;
    bool found = false;

    cout << "\nEnter Roll Number to Delete: ";
    cin >> r;

    for (int i = 0; i < count; i++) {
        if (roll[i] == r) {

            for (int j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            count--;
            found = true;

            cout << "\nRecord Deleted Successfully!\n";
            break;
        }
    }

    if (!found)
        cout << "Student Not Found!\n";
}

void topper() {
    if (count == 0) {
        cout << "\nNo Records Available!\n";
        return;
    }

    int index = 0;

    for (int i = 1; i < count; i++) {
        if (marks[i] > marks[index])
            index = i;
    }

    cout << "\n------ TOPPER DETAILS ------\n";
    cout << "Roll No : " << roll[index] << endl;
    cout << "Name    : " << name[index] << endl;
    cout << "Marks   : " << marks[index] << endl;
}

int main() {

    int choice;

    do {
        cout << "\n========== STUDENT MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Find Topper\n";
        cout << "7. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                topper();
                break;

            case 7:
                cout << "\nThank You for Using Student Management System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 7);

    return 0;
}