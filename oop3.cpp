#include <iostream>
#include <iomanip>
#include <string>

class REPORT {
private:
    int adno;                        // 4-digit admission number
    std::string name;                // 20-character name
    float marks[5];                 // Array of 5 floating-point values
    float average;                  // Average marks obtained

    // Function to compute the average obtained in five subjects
    void GETAVG() {
        average = 0.0;
        for (int i = 0; i < 5; i++) {
            average += marks[i];
        }
        average /= 5;
    }

public:
    // Function to read student information
    void READINFO() {
        std::cout << "Enter 4-digit Admission Number: ";
        std::cin >> adno;
        std::cin.ignore();  // Clear newline character from input buffer

        std::cout << "Enter Name (up to 20 characters): ";
        std::getline(std::cin, name);

        std::cout << "Enter Marks for 5 Subjects:" << std::endl;
        for (int i = 0; i < 5; i++) {
            std::cout << "Subject " << i + 1 << ": ";
            std::cin >> marks[i];
        }

        // Calculate the average marks
        GETAVG();
    }

    // Function to display student information in a table
    void DISPLAYINFO() {
        std::cout << "\n--------------------------------------------------------" << std::endl;
        std::cout << "           REPORT CARD" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Admission Number: " << std::setw(6) << adno << std::endl;
        std::cout << "Name: " << std::setw(25) << name << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Subject   Marks" << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
        for (int i = 0; i < 5; i++) {
            std::cout << "Subject " << i + 1 << ": " << std::setw(6) << marks[i] << std::endl;
        }
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Average Marks: " << std::setw(6) << average << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;
    }
};

int main() {
    REPORT studentReport;  // Create an object of the REPORT class

    // Read and display student information
    studentReport.READINFO();
    studentReport.DISPLAYINFO();

    return 0;
}
