#include<iostream>
using namespace std;
void sum(int, int);
void sum(double, double, double);//function overloading
void diff(int, int);
int main()
{
    cout<<"11. Program to find sum and difference between two numbers using \nfunction and sum of  three numbers using function Overloading"<<endl;
    int a,b;
    cout<<"Enter the two numbers:";
    cin>>a>>b;
    sum(a , b);
    diff(a,b);
    cout<<"The same sum function used to find sum between three double numbers 8.888,9.523,4.699: ";
    sum(8.888,9.523,4.699);
    return 0;
}
void sum (int x, int y)
{
    cout<<"Sum of the two numbers is "<<x+y<<endl;
}
void sum(double x, double y, double z)
{
    cout<<x+y+z;
}
void diff(int x, int y)
{
    cout<<"The difference between the two numbers is "<<x-y<<endl;
}