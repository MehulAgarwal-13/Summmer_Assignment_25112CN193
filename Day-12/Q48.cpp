#include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (perfect(num))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";
    return 0;
}