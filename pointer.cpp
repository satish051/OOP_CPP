#include<iostream>
using namespace std;

int main()
{
    int x=30;
    int *p;
    p=&x;
    cout<<"7. Program to demonstrate pointer."<<endl;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Address of x is "<<p<<endl;
    cout<<"Value of x using pointer is "<<*p<<endl;
    return 0;
}