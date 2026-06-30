#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    int bookID[MAX];
    string bookName[MAX];
    string author[MAX];
    bool issued[MAX];

    int count = 0;
    int choice;

    do {
        cout << "\n========== MINI LIBRARY SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < MAX) {
                cout << "\nEnter Book ID: ";
                cin >> bookID[count];
                cin.ignore();

                cout << "Enter Book Name: ";
                getline(cin, bookName[count]);

                cout << "Enter Author Name: ";
                getline(cin, author[count]);

                issued[count] = false;
                count++;

                cout << "\nBook Added Successfully!\n";
            } else {
                cout << "\nLibrary is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Books Available.\n";
            } else {
                cout << "\n========== BOOK LIST ==========\n";
                cout << "ID\tBook Name\t\tAuthor\t\tStatus\n";
                cout << "-------------------------------------------------------------\n";

                for (int i = 0; i < count; i++) {
                    cout << bookID[i] << "\t"
                         << bookName[i] << "\t\t"
                         << author[i] << "\t\t"
                         << (issued[i] ? "Issued" : "Available") << endl;
                }
            }
            break;

        case 3: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookID[i] == id) {
                    cout << "\nBook Found\n";
                    cout << "Book ID   : " << bookID[i] << endl;
                    cout << "Book Name : " << bookName[i] << endl;
                    cout << "Author    : " << author[i] << endl;
                    cout << "Status    : "
                         << (issued[i] ? "Issued" : "Available") << endl;
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 4: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookID[i] == id) {
                    if (!issued[i]) {
                        issued[i] = true;
                        cout << "Book Issued Successfully!\n";
                    } else {
                        cout << "Book is Already Issued!\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 5: {
            int id;
            bool found = false;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (bookID[i] == id) {
                    if (issued[i]) {
                        issued[i] = false;
                        cout << "Book Returned Successfully!\n";
                    } else {
                        cout << "Book is Already Available!\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book Not Found!\n";

            break;
        }

        case 6:
            cout << "\nThank You for Using Mini Library System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}