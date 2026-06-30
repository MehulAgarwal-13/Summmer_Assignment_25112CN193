#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited Successfully!\n";
        } else {
            cout << "Invalid Amount!\n";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }
    void checkBalance() {
        cout << "Current Balance: ₹" << balance << endl;
    }

    void displayDetails() {
        cout << "\n----- Account Details -----";
        cout << "\nAccount Number : " << accountNumber;
        cout << "\nAccount Holder : " << accountHolder;
        cout << "\nBalance        : ₹" << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << "\n========== Bank Account System ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Display Account Details\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.checkBalance();
                break;

            case 5:
                account.displayDetails();
                break;

            case 6:
                cout << "Thank You for Using Bank Account System!\n";
                break;

            default:
                cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}