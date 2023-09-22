#include <iostream>

class Number {
protected:
    int value;

public:
    Number(int val) : value(val) {}

    virtual int calculate() const {
        return value;
    }
};

class FactorialNumber : public Number {
public:
    FactorialNumber(int val) : Number(val) {}

    int calculate() const override {
        int result = 1;
        for (int i = 1; i <= value; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    Number num(5);
    FactorialNumber factNum(5);

    std::cout << "Number: " << num.calculate() << std::endl;
    std::cout << "Factorial: " << factNum.calculate() << std::endl;

    return 0;
}
