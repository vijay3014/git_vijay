#include<iostream>
using namespace std;
int main()
{
    char a[50],b[20];
    int i=0,j=0;
    cout<<"enter string 1:";
    gets(a);
    cout<<"enter string 2:";
    gets(b);
    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
    {
        a[i++]=b[j++];
    }
    a[i]='\0';
    cout<<"merge strung is:",a;

}