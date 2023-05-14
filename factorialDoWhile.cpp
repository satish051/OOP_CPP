#include<iostream>
using namespace std;

int main()
{
    int n,i=1,fact=1;
    cout<<"4. Program to find factorial of a number using dowhile loop."<<endl;
    cout<<"Enter the number of which you want to find factorial :";
    cin>>n;
        if(n<0)
    {
        cout<<"Factorial of negative numbers does not exist!!"<<endl;
    }
    else if(n==0 || n==1)
    {
        cout<<"Factorial is 1."<<endl;
    }
    else{
    do
    {
        fact=fact*i;
        i++;
    }while(i<=n);
    cout<<"The factorial of "<<n<<" is "<<fact<<"."<<endl;
    }
    return 0;
}