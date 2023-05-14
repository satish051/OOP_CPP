#include<iostream>
using namespace std;

int main()
{
    int a=0,b=1,n,i=1,sum=0;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
    
    return 0;
}