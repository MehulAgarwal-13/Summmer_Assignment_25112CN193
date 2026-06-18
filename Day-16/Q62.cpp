#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxFreq = 0, maxElement;

    for(int i = 0; i < n; i++) {
        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }
    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;
    return 0;
}