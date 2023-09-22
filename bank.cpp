#include <iostream>

using namespace std;

class Bank {
private:
    string account_holder;
    double balance;

public:
    Bank(const string& holder, double Total_balance) {
        account_holder = holder;
        balance = Total_balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "no balance." << endl;
        }
    }

    void display_balance() {
        cout << "Account Holder: " << account_holder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string account_holder;
    double total_balance;

    cout << "account holder name: ";
    getline(cin, account_holder);

    cout << "total balance : ";
    cin >> total_balance;

    Bank account(account_holder, total_balance);

    while (true) {
        cout << "\nOptions:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                double deposit_amount;
                cout << "Enter the deposit amount : ";
                cin >> deposit_amount;
                account.deposit(deposit_amount);
                break;

            case 2:
                double withdraw_amount;
                cout << "Enter the withdrawal amount : ";
                cin >> withdraw_amount;
                account.withdraw(withdraw_amount);
                break;

            case 3:
                account.display_balance();
                break;

            case 4:
                cout << "Exiting program. thank you" << endl;
                return 0;

            default:
                cout << "Invalid option." << endl;
        }
    }

    return 0;
}
