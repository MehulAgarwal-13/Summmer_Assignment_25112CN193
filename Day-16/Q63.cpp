#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> sum;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No pair found with the given sum.";
    }

    return 0;
}