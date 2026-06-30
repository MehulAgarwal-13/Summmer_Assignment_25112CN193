#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;
    bool issued;

    void addBook() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        issued = false;
    }

    void displayBook() {
        cout << "\nBook ID     : " << id;
        cout << "\nTitle       : " << title;
        cout << "\nAuthor      : " << author;
        cout << "\nStatus      : " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book library[100];
    int count = 0;
    int choice, id, i;
    bool found;

    do {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display All Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            library[count].addBook();
            count++;
            cout << "Book Added Successfully!\n";
            break;

        case 2:
            if (count == 0) {
                cout << "No books available.\n";
            } else {
                for (i = 0; i < count; i++) {
                    library[i].displayBook();
                }
            }
            break;

        case 3:
            cout << "Enter Book ID to search: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    library[i].displayBook();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;

        case 4:
            cout << "Enter Book ID to issue: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    if (!library[i].issued) {
                        library[i].issued = true;
                        cout << "Book Issued Successfully.\n";
                    } else {
                        cout << "Book is already issued.\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;

        case 5:
            cout << "Enter Book ID to return: ";
            cin >> id;
            found = false;

            for (i = 0; i < count; i++) {
                if (library[i].id == id) {
                    if (library[i].issued) {
                        library[i].issued = false;
                        cout << "Book Returned Successfully.\n";
                    } else {
                        cout << "Book was not issued.\n";
                    }
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Book not found.\n";
            break;

        case 6:
            cout << "Thank you for using Library Management System.\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}