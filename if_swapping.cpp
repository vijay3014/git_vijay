#include <iostream>

using namespace std;

int main()
 {
   
    int a, b;

    
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

      cout << "Before swapping, a = " << a << " and b = " << b;

   
    int temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping, a = " << a << " and b = " << b; 
  
    

    return 0;
}