#include <iostream>

using namespace std;

int main() {
    
    int num1, num2;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;

    
    int smallest;
    if (num1 < num2)
     {
        smallest = num1;
     }
     else
      {
        smallest = num2;
      }
    cout << "The smallest number is: " << smallest ;


}