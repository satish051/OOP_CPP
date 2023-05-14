#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,i=1,sum=0;
    cout<<"2. Program to find n number of terms of fibonacci series using while loop."<<endl;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;
    while(i<=n)
    {
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
        i++;

    }
    return 0;
}