#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    if (strcmp(str, rev) == 0)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}