#include <iostream>
#include <string>
using namespace std;

class Ticket {
private:
    int totalSeats;
    int bookedSeats;
    string passengerName;
    int age;
    string source;
    string destination;

public:
    Ticket() {
        totalSeats = 50;
        bookedSeats = 0;
    }

    void bookTicket() {
        if (bookedSeats >= totalSeats) {
            cout << "\nSorry! No seats available.\n";
            return;
        }

        cin.ignore();

        cout << "\nEnter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        bookedSeats++;

        cout << "\nTicket Booked Successfully!\n";
        cout << "Seat Number: " << bookedSeats << endl;
    }

    void cancelTicket() {
        if (bookedSeats == 0) {
            cout << "\nNo tickets booked.\n";
        } else {
            bookedSeats--;
            cout << "\nTicket Cancelled Successfully!\n";
        }
    }

    void viewTicket() {
        if (bookedSeats == 0) {
            cout << "\nNo ticket found.\n";
        } else {
            cout << "\n------ Ticket Details ------";
            cout << "\nPassenger Name : " << passengerName;
            cout << "\nAge            : " << age;
            cout << "\nSource         : " << source;
            cout << "\nDestination    : " << destination;
            cout << "\nSeat Number    : " << bookedSeats;
            cout << endl;
        }
    }

    void availableSeats() {
        cout << "\nTotal Seats     : " << totalSeats;
        cout << "\nBooked Seats    : " << bookedSeats;
        cout << "\nAvailable Seats : " << totalSeats - bookedSeats << endl;
    }
};

int main() {
    Ticket t;
    int choice;

    do {
        cout << "\n========== Ticket Booking System ==========\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. View Ticket Details\n";
        cout << "4. Check Available Seats\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t.bookTicket();
                break;

            case 2:
                t.cancelTicket();
                break;

            case 3:
                t.viewTicket();
                break;

            case 4:
                t.availableSeats();
                break;

            case 5:
                cout << "\nThank You for Using Ticket Booking System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}