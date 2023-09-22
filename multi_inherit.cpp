#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }

    void stop() {
        cout << "Engine stopped" << endl;
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels are rotating" << endl;
    }

    void stopRotation() {
        cout << "Wheels have stopped rotating" << endl;
    }
};

class Interior {
public:
    void accelerate() {
        cout << "Press the accelerator pedal" << endl;
    }

    void brake() {
        cout << "Press the brake pedal" << endl;
    }
};

class Cars : public Engine, public Wheels, public Interior {
public:
    void drive() {
        cout << "Car is in motion" << endl;
    }

    void park() {
        cout << "Car is parked" << endl;
    }
};

int main() {
    Cars myCar;

    myCar.start();
    myCar.stop();

    myCar.rotate();
    myCar.stopRotation();

    myCar.accelerate();
    myCar.brake();

    myCar.drive();
    myCar.park();

    return 0;
}
