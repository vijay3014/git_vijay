#include<iostream>
using namespace std;
int reverse()
{
    int n,r;
    cout<<"Enter the number : ";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
    return r;
}
int main()
{
    reverse();
}