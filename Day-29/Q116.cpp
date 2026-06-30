#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    int id;
    string name;
    int quantity;
    float price;
    void addProduct() {
        cout << "Enter Product ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displayProduct() {
        cout << "\n--------------------------------";
        cout << "\nProduct ID   : " << id;
        cout << "\nProduct Name : " << name;
        cout << "\nQuantity     : " << quantity;
        cout << "\nPrice        : ₹" << price;
        cout << "\nTotal Value  : ₹" << quantity * price << endl;
    }
};

int main() {
    Product inventory[100];
    int count = 0;
    int choice, id;
    bool found;

    do {
        cout << "\n========== INVENTORY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product Quantity\n";
        cout << "5. Delete Product\n";
        cout << "6. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 100) {
                inventory[count].addProduct();
                count++;
                cout << "\nProduct Added Successfully!\n";
            } else {
                cout << "\nInventory is Full!\n";
            }
            break;

        case 2:
            if (count == 0) {
                cout << "\nNo Products Available.\n";
            } else {
                cout << "\n========== PRODUCT LIST ==========\n";
                for (int i = 0; i < count; i++) {
                    inventory[i].displayProduct();
                }
            }
            break;

        case 3:
            cout << "Enter Product ID to Search: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    inventory[i].displayProduct();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nProduct Not Found!\n";

            break;

        case 4:
            cout << "Enter Product ID to Update Quantity: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    cout << "Current Quantity: " << inventory[i].quantity << endl;
                    cout << "Enter New Quantity: ";
                    cin >> inventory[i].quantity;
                    cout << "\nQuantity Updated Successfully!\n";
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nProduct Not Found!\n";

            break;

        case 5:
            cout << "Enter Product ID to Delete: ";
            cin >> id;
            found = false;

            for (int i = 0; i < count; i++) {
                if (inventory[i].id == id) {
                    for (int j = i; j < count - 1; j++) {
                        inventory[j] = inventory[j + 1];
                    }
                    count--;
                    found = true;
                    cout << "\nProduct Deleted Successfully!\n";
                    break;
                }
            }

            if (!found)
                cout << "\nProduct Not Found!\n";

            break;

        case 6:
            cout << "\nThank You for Using Inventory Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 6);

    return 0;
}