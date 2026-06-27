#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empID;
    string name;
    string department;
    float salary;
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "\nEnter Employee ID: ";
            cin >> emp[n].empID;

            cout << "Enter Employee Name: ";
            cin >> emp[n].name;

            cout << "Enter Department: ";
            cin >> emp[n].department;

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "\nEmployee Added Successfully!\n";
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo employee records found.\n";
            } else {
                cout << "\n----- Employee Records -----\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID : " << emp[i].empID;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nDepartment  : " << emp[i].department;
                    cout << "\nSalary      : " << emp[i].salary;
                    cout << "\n----------------------------\n";
                }
            }
            break;

        case 3:
            if (n == 0) {
                cout << "\nNo employee records found.\n";
            } else {
                cout << "Enter Employee ID to Search: ";
                cin >> id;

                found = false;

                for (int i = 0; i < n; i++) {
                    if (emp[i].empID == id) {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << emp[i].empID << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Department  : " << emp[i].department << endl;
                        cout << "Salary      : " << emp[i].salary << endl;

                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "\nEmployee Not Found.\n";
            }
            break;

        case 4:
            cout << "\nThank you for using Employee Management System.\n";
            break;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}