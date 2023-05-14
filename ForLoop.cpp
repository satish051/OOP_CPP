// Program to find the sum of n natural numbers
#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"1. Program to find the sum of n natural numbers using for loop."<<endl;
    cout<<"Enter the number up to which you want to find the sum up to:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"The sum up to "<<n<<" is "<<sum<<"."<<endl;
    return 0;

}

