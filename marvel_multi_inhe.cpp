#include <iostream>
using namespace std;

class IronMan {
public:
    void fly() {
        cout << "Iron Man is flying!" << endl;
    }
};

class SpiderMan {
public:
    void swing() {
        cout << "Spider Man is swinging!" << endl;
    }
};

class Hulk {
public:
    void smash() {
        cout << "Hulk is smashing!" << endl;
    }
};

class Marvel : public IronMan, public SpiderMan, public Hulk {
public:
    void assemble() {
        cout << "The Marvel heroes are assembling!" << endl;
    }
};

int main() {
    Marvel avengers;

    avengers.fly();    
    avengers.swing();  
    avengers.smash();  
    avengers.assemble();

    return 0;
}
