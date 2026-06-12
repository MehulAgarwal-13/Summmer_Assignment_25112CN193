#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int temp = n, rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    return (temp == rev);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (palindrome(num))
        cout << "Palindrome Number";
        else
        cout << "Not a Palindrome Number";

    return 0;
}