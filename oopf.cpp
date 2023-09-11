#include <iostream>
#include <string>

class Flight {
private:
    int flightNumber;
    std::string destination;
    float distance;
    float fuel;

    void CALFUEL() {
        if (distance <= 1000)
            fuel = 500;
        else if (distance <= 2000)
            fuel = 1100;
        else
            fuel = 2200;
    }

public:
    void FEEDINFO() {
        std::cout << "Enter Flight Number: ";
        std::cin >> flightNumber;
        std::cin.ignore(); // Clear newline character from buffer
        std::cout << "Enter Destination: ";
        std::getline(std::cin, destination);
        std::cout << "Enter Distance: ";
        std::cin >> distance;
        CALFUEL(); // Calculate fuel based on distance
    }

    void SHOWINFO() {
        std::cout << "Flight Number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance: " << distance << " km" << std::endl;
        std::cout << "Fuel: " << fuel << " liters" << std::endl;
    }
};
int main() {
    Flight flight1;
    flight1.FEEDINFO();
    flight1.SHOWINFO();

    return 0;
}
