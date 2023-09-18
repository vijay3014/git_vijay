#include <iostream>

class Pentagon {
private:
    int sides;

public:
    Pentagon(int s = 5) : sides(s) {}

    Pentagon& operator++() {
        ++sides;
        return *this;
    }


    Pentagon& operator--() {
        if (sides > 3) {
            --sides;
        }
        return *this;
    }

    void display() {
        std::cout << "This Pentagon has " << sides << " sides." << std::endl;
    }
};

int main() {
    Pentagon p1;

    ++p1;
    p1.display();  
    --p1;
    p1.display();

    return 0;
}
