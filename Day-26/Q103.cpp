#include <iostream>
using namespace std;

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000.0, amount;

    cout << "===== ATM Simulation =====" << endl;
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access Denied." << endl;
        return 0;
    }

    do {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit Successful!" << endl;
                    cout << "Updated Balance: Rs. " << balance << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount!" << endl;
                }
                else if (amount > balance) {
                    cout << "Insufficient Balance!" << endl;
                }
                else {
                    balance -= amount;
                    cout << "Withdrawal Successful!" << endl;
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}