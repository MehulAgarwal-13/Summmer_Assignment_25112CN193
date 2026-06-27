#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    int empID;
    string name;
    float basicSalary, hra, da, deduction, netSalary;

    void calculateSalary() {
        hra = basicSalary * 0.20;       
        da = basicSalary * 0.10;        
        deduction = basicSalary * 0.05; 
        netSalary = basicSalary + hra + da - deduction;
    }
};

int main() {
    Employee emp[100];
    int n = 0, choice, id;
    bool found;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee Salary\n";
        cout << "2. Display Salary Records\n";
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

            cout << "Enter Basic Salary: ";
            cin >> emp[n].basicSalary;

            emp[n].calculateSalary();

            cout << "\nSalary Calculated Successfully!\n";
            n++;
            break;

        case 2:
            if (n == 0) {
                cout << "\nNo salary records found.\n";
            } else {
                cout << "\n========== Salary Records ==========\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEmployee ID : " << emp[i].empID;
                    cout << "\nName        : " << emp[i].name;
                    cout << "\nBasic Salary: " << emp[i].basicSalary;
                    cout << "\nHRA         : " << emp[i].hra;
                    cout << "\nDA          : " << emp[i].da;
                    cout << "\nDeduction   : " << emp[i].deduction;
                    cout << "\nNet Salary  : " << emp[i].netSalary;
                    cout << "\n-------------------------------\n";
                }
            }
            break;

        case 3:
            if (n == 0) {
                cout << "\nNo records found.\n";
            } else {
                cout << "Enter Employee ID to Search: ";
                cin >> id;

                found = false;

                for (int i = 0; i < n; i++) {
                    if (emp[i].empID == id) {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << emp[i].empID << endl;
                        cout << "Name        : " << emp[i].name << endl;
                        cout << "Basic Salary: " << emp[i].basicSalary << endl;
                        cout << "HRA         : " << emp[i].hra << endl;
                        cout << "DA          : " << emp[i].da << endl;
                        cout << "Deduction   : " << emp[i].deduction << endl;
                        cout << "Net Salary  : " << emp[i].netSalary << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "\nEmployee Record Not Found.\n";
            }
            break;

        case 4:
            cout << "\nThank You for Using Salary Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 4);

    return 0;
}