#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice;
    int i, sum, largest, smallest, key, pos;
    bool found;

    do {
        cout << "\n========== ARRAY OPERATIONS SYSTEM ==========\n";
        cout << "1. Input Array\n";
        cout << "2. Display Array\n";
        cout << "3. Find Sum of Elements\n";
        cout << "4. Find Largest Element\n";
        cout << "5. Find Smallest Element\n";
        cout << "6. Search an Element\n";
        cout << "7. Sort Array (Ascending)\n";
        cout << "8. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter Number of Elements: ";
            cin >> n;

            cout << "Enter Array Elements:\n";
            for(i = 0; i < n; i++) {
                cin >> arr[i];
            }
            cout << "Array Input Successful!\n";
            break;

        case 2:
            cout << "Array Elements: ";
            for(i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;

        case 3:
            sum = 0;
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout << "Sum of Elements = " << sum << endl;
            break;

        case 4:
            largest = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] > largest)
                    largest = arr[i];
            }
            cout << "Largest Element = " << largest << endl;
            break;

        case 5:
            smallest = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] < smallest)
                    smallest = arr[i];
            }
            cout << "Smallest Element = " << smallest << endl;
            break;

        case 6:
            cout << "Enter Element to Search: ";
            cin >> key;

            found = false;

            for(i = 0; i < n; i++) {
                if(arr[i] == key) {
                    pos = i + 1;
                    found = true;
                    break;
                }
            }

            if(found)
                cout << "Element Found at Position " << pos << endl;
            else
                cout << "Element Not Found!" << endl;

            break;

        case 7:
            for(i = 0; i < n - 1; i++) {
                for(int j = i + 1; j < n; j++) {
                    if(arr[i] > arr[j]) {
                        int temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }

            cout << "Array Sorted Successfully!\n";
            break;

        case 8:
            cout << "Thank You for Using Array Operations System!\n";
            break;

        default:
            cout << "Invalid Choice! Please Try Again.\n";
        }

    } while(choice != 8);

    return 0;
}