#include<iostream>
using namespace std;

int main()
{
    int n,i,fact=1;
    cout<<"Enter the number up to which you want to find the Factorial of:"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Factorial of negative numbers does not exist!!"<<endl;
    }
    else if(n==0)
    {
        cout<<"Factorial is 1."<<endl;
    }
    else{
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<"."<<endl;
    }
    return 0;
    
}