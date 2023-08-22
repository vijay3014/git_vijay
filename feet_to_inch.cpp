#include <iostream>

using namespace std;

int main() {
    double feet;
    
 
    cout << "Enter the number of feet: ";
    cin >> feet;
    
    double inches = feet * 12;
    
    
    cout << feet << " feet to " << inches << " inches.";
    
    return 0;
}