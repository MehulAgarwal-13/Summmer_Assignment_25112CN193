#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    do {
        cout << "\n========== STRING OPERATIONS SYSTEM ==========\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Convert to Lowercase\n";
        cout << "7. Compare Two Strings\n";
        cout << "8. Concatenate Strings\n";
        cout << "9. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1:
            cout << "Enter a String: ";
            getline(cin, str1);
            cout << "String Stored Successfully!\n";
            break;

        case 2:
            cout << "String: " << str1 << endl;
            break;

        case 3:
            cout << "Length of String = " << str1.length() << endl;
            break;

        case 4: {
            string temp = str1;
            reverse(temp.begin(), temp.end());
            cout << "Reversed String: " << temp << endl;
            break;
        }

        case 5: {
            string temp = str1;
            for (int i = 0; i < temp.length(); i++)
                temp[i] = toupper(temp[i]);
            cout << "Uppercase String: " << temp << endl;
            break;
        }

        case 6: {
            string temp = str1;
            for (int i = 0; i < temp.length(); i++)
                temp[i] = tolower(temp[i]);
            cout << "Lowercase String: " << temp << endl;
            break;
        }

        case 7:
            cout << "Enter Second String: ";
            getline(cin, str2);

            if (str1 == str2)
                cout << "Both Strings are Equal.\n";
            else
                cout << "Strings are Not Equal.\n";
            break;

        case 8:
            cout << "Enter Second String: ";
            getline(cin, str2);
            cout << "Concatenated String: " << str1 + str2 << endl;
            break;

        case 9:
            cout << "Thank You for Using String Operations System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while (choice != 9);

    return 0;
}