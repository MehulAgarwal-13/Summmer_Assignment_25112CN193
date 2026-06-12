#include <iostream>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int temp = n, sum = 0, digit, count = 0;
    int num = n;
    while (num > 0)
    {
        count++;
        num /= 10;
    }
    num = n;
    while (num > 0)
    {
        digit = num % 10;
        sum += pow(digit, count);
        num /= 10;}
         
    return (sum == temp);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (armstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}