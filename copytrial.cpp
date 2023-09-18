#include <iostream>
#include <string>
#include <cstring>

class MyClass {
public:
    // Constructor with parameters
    MyClass(int i, double d, const std::string& s, const char* arr) 
        : integerMember(i), doubleMember(d), stringMember(s) {
        // Copy the array
        strcpy(charArrayMember, arr);
    }

    // Copy constructor
    MyClass(const MyClass& other) 
        : integerMember(other.integerMember), doubleMember(other.doubleMember), stringMember(other.stringMember) {
        // Copy the array
        strcpy(charArrayMember, other.charArrayMember);
    }

    // Display the object's data
    void Display() const {
        std::cout << "Integer: " << integerMember << std::endl;
        std::cout << "Double: " << doubleMember << std::endl;
        std::cout << "String: " << stringMember << std::endl;
        std::cout << "Char Array: " << charArrayMember << std::endl;
    }

private:
    int integerMember;
    double doubleMember;
    std::string stringMember;
    char charArrayMember[256]; // Assume a fixed-size character array
};

int main() {
    // Create an object
    MyClass originalObject(42, 3.14, "Hello, World!", "This is a char array.");

    // Create a copy using the copy constructor
    MyClass copyObject(originalObject);

    // Display the original and copied objects
    std::cout << "Original Object:" << std::endl;
    originalObject.Display();

    std::cout << "\nCopy Object:" << std::endl;
    copyObject.Display();

    return 0;
}
