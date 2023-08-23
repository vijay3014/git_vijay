#include<iostream>
using namespace std;
int product(int a)
{
    int i,j,vs=10;
    for (i =1;i<=j;i++ )
    {
        for(j=1;j<=vs;j++)
        {
            cout<<"   ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*  ";
        }
        vs--;
        cout<<"\n";
    } 
}
int main()
{
    int x;
    cout<<"enter x:";
    cin>>x;
    product(x);
}