#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"4  . Program to find the largest number between three numbers using nested if else."<<endl;
    cout <<"Enter the three numbers: ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a > c)
        {
            cout << a << " is the greatest number." << endl;
        }
        else
        {
            cout << c << " is the greatest number." << endl;
        }
    }
    else
    {
        if(b > c)
        {
            cout << b << " is the greatest number." << endl;
        }
        else 
        {
            cout << c << " is the greatest number." << endl;
        }
    }
    return 0;

}