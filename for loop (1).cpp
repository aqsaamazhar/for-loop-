#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter two number:";
    cin>>i,j;
    for(i=1;i<=6;i++)
    for(j=i;j<=i;j++)
    {
    cout<<"*";
    }
    {
    cout<<"\n";
    }
    return 0;
    }