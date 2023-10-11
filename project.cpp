#include <iostream>

struct MenuItem {
    std::string foodName;
    int number;
    double price;
};

// Explicitly include vector and iomanip
#include <vector>
#include <iomanip>

int main() {
    // Using the std namespace for cout and cin
    using namespace std;

    vector<MenuItem> menu = {
        {"Burger", 1, 150.00},
        {"Pizza", 2, 250.00},
        {"Pasta", 3, 180.00},
    };

    string userName;
    string userContactNumber;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, userName);

    cout << "Enter your contact number: ";
    cin >> userContactNumber;

    vector<MenuItem> orders;
    char choice;

    do {
        cout << "Menu:\n";
        cout << "-------------------------------------------------------------\n";
        cout << "Number\tFood Name\t\tPrice (in Rs.)\n";
        for (const MenuItem& item : menu) {
            cout << item.number << "\t" << item.foodName << "\t\tRs." << fixed << setprecision(2) << item.price << endl;
        }
        cout << "-------------------------------------------------------------\n";

        int orderNumber;
        cout << "Enter the item number to order: ";
        cin >> orderNumber;

        if (orderNumber >= 1 && orderNumber <= menu.size()) {
            orders.push_back(menu[orderNumber - 1]);
        } else {
            cout << "Invalid item number. Please try again.\n";
        }

        cout << "Do you want to order another item? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    double total = 0;
    for (const MenuItem& order : orders) {
        total += order.price;
    }

    double gst = 0.05 * total;
    double cgst = gst;
    double netBill = total + gst + cgst;

    cout << "\nOrder Details for " << userName << " (Contact: " << userContactNumber << "):\n";
    cout << "-------------------------------------------------------------\n";
    cout << "Ordered Items:\n";
    for (const MenuItem& order : orders) {
        cout << order.foodName << "\tRs." << fixed << setprecision(2) << order.price << endl;
    }
    cout << "-------------------------------------------------------------\n";
    cout << "Total Bill:\t\tRs." << fixed << setprecision(2) << total << endl;
    cout << "GST (5%):\t\tRs." << fixed << setprecision(2) << gst << endl;
    cout << "CGST (5%):\t\tRs." << fixed << setprecision(2) << cgst << endl;
    cout << "Net Bill:\t\tRs." << fixed << setprecision(2) << netBill << endl;
    cout << "-------------------------------------------------------------\n";

    return 0;
}
