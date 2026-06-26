#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], temp[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (strlen(str1) != strlen(str2)) {
        cout << "Not a Rotation";
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2))
        cout << "Strings are Rotations";
    else
        cout << "Strings are Not Rotations";

    return 0;
}