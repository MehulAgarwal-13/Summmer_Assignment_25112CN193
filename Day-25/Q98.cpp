#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Common characters: ";

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 0;

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        bool printed = false;
        for (int k = 0; k < i; k++) {
            if (str[k] == str[i]) {
                printed = true;
                break;
            }
        }

        if (count > 1 && !printed)
            cout << str[i] << " ";
    }

    return 0;
}