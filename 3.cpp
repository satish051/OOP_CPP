#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"3. Program to find the largest number between two numbers using if else."<<endl;
    cout <<"Enter the two numbers: ";
    cin>>a>>b;
    if (a > b)
        cout<<a<<" is the greater number."<<endl;
    
    else 
    cout<< b <<" is the greater number."<<endl;
    return 0;
}