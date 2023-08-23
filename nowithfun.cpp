#include<iostream>
using namespace std;
   int product()
   {
    int a,b,c;
    cout<<"Enter a";
    cin>>a;
    cout<<"Enter b ";
    cin >>b ;
    c=a*b;
    return(c);
   }
   int main()
   {
    cout<<"hello\n";
    int x =product();
    cout << "Product is "<<x;

   }