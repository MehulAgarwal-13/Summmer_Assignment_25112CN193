#include <iostream>
#include <string>
using namespace std;

class Contact {
public:
    string name;
    string phone;
    string email;
    void addContact() {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phone);

        cout << "Enter Email: ";
        getline(cin, email);
    }
    void displayContact() {
        cout << "\n---------------------------";
        cout << "\nName  : " << name;
        cout << "\nPhone : " << phone;
        cout << "\nEmail : " << email << endl;
    }
};

int main() {
    Contact contacts[100];
    int count = 0;
    int choice;
    string searchName;
    bool found;

    do {
        cout << "\n========== Contact Management System ==========\n";
        cout << "1. Add Contact\n";
        cout << "2. Display All Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 100) {
                contacts[count].addContact();
                count++;
                cout << "\nContact Added Successfully!\n";
            } else {
                cout << "\nContact List is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Contacts Available.\n";
            } else {
                cout << "\n------ Contact List ------";
                for (int i = 0; i < count; i++) {
                    contacts[i].displayContact();
                }
            }
            break;

        case 3:
            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            found = false;

            for (int i = 0; i < count; i++) {
                if (contacts[i].name == searchName) {
                    contacts[i].displayContact();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nContact Not Found!\n";

            break;

        case 4:
            cin.ignore();
            cout << "Enter Name to Delete: ";
            getline(cin, searchName);

            found = false;

            for (int i = 0; i < count; i++) {
                if (contacts[i].name == searchName) {
                    for (int j = i; j < count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "\nContact Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nContact Not Found!\n";

            break;

        case 5:
            cout << "\nThank You for Using Contact Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}