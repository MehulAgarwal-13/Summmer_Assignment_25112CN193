#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int roll[MAX];
    string name[MAX];
    float marks[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n========== STUDENT RECORD SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < MAX) {
                cout << "\nEnter Roll Number: ";
                cin >> roll[count];
                cin.ignore();

                cout << "Enter Student Name: ";
                getline(cin, name[count]);

                cout << "Enter Marks: ";
                cin >> marks[count];

                count++;
                cout << "\nStudent Record Added Successfully!\n";
            } else {
                cout << "\nRecord is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Student Records Available.\n";
            } else {
                cout << "\n------ Student Records ------\n";
                cout << "Roll No\tName\t\tMarks\n";
                cout << "------------------------------------\n";

                for (int i = 0; i < count; i++) {
                    cout << roll[i] << "\t"
                         << name[i] << "\t\t"
                         << marks[i] << endl;
                }
            }
            break;

        case 3: {
            int searchRoll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> searchRoll;

            for (int i = 0; i < count; i++) {
                if (roll[i] == searchRoll) {
                    cout << "\nStudent Found\n";
                    cout << "Roll Number : " << roll[i] << endl;
                    cout << "Name        : " << name[i] << endl;
                    cout << "Marks       : " << marks[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 4: {
            int updateRoll;
            bool found = false;

            cout << "Enter Roll Number to Update: ";
            cin >> updateRoll;

            for (int i = 0; i < count; i++) {
                if (roll[i] == updateRoll) {
                    cin.ignore();

                    cout << "Enter New Name: ";
                    getline(cin, name[i]);

                    cout << "Enter New Marks: ";
                    cin >> marks[i];

                    cout << "Record Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 5: {
            int deleteRoll;
            bool found = false;

            cout << "Enter Roll Number to Delete: ";
            cin >> deleteRoll;

            for (int i = 0; i < count; i++) {
                if (roll[i] == deleteRoll) {

                    for (int j = i; j < count - 1; j++) {
                        roll[j] = roll[j + 1];
                        name[j] = name[j + 1];
                        marks[j] = marks[j + 1];
                    }

                    count--;
                    found = true;
                    cout << "Record Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "Student Not Found!\n";

            break;
        }

        case 6:
            cout << "\nThank You for Using Student Record System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}