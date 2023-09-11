#include <iostream>
#include <string>
using namespace std;

class BOOK {
private:
    int BOOK_NO;
    char BOOKTITLE[21];
    float PRICE;

    float TOTAL_COST(int N) {
        return N * PRICE;
    }

public:
    void INPUT() {
        cout << "Enter BOOK_NO: ";
        cin >> BOOK_NO;

        cin.ignore(); // Clear the input buffer

        cout << "Enter BOOKTITLE (up to 20 characters): ";
        cin.getline(BOOKTITLE, 21);

        cout << "Enter PRICE: ";
        cin >> PRICE;
    }

    void PURCHASE() {
        int numCopies;
        cout << "Enter the number of copies to be purchased: ";
        cin >> numCopies;

        float totalCost = TOTAL_COST(numCopies);

        cout << "Total cost to be paid by the user: " << totalCost << " Indian Rupees" << endl;
    }
};

int main() {
    BOOK myBook;

    myBook.INPUT();
    myBook.PURCHASE();

    return 0;
}
