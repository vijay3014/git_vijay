#include <iostream>
using namespace std;
class FactorialCalculator {
public:
    virtual unsigned long long calculateFactorial(int n) const = 0;
};

class RecursiveFactorialCalculator : public FactorialCalculator {
public:
    unsigned long long calculateFactorial(int n) const override {
        if (n <= 1) {
            return 1;
        } else {
            return static_cast<unsigned long long>(n) * calculateFactorial(n - 1);
        }
    }
};

class IterativeFactorialCalculator : public FactorialCalculator {
public:
    unsigned long long calculateFactorial(int n) const override {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= static_cast<unsigned long long>(i);
        }
        return result;
    }
};

int main() {
    int n;
    std::cout << "Enter a number to calculate its factorial: ";
    std::cin >> n;

    FactorialCalculator* calculator = nullptr;
    calculator = new RecursiveFactorialCalculator();

    unsigned long long result = calculator->calculateFactorial(n);
    cout << "Factorial of " << n << " is " << result << endl;

    delete calculator;

    return 0;
}
