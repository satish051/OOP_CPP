#include<iostream>
using namespace std;
int num; //Global variable which can be used throughout the whole program //Global scope
void display();
int main()
{
    cout<<"14. Program to show file scope"<<endl;
    num=5;
    display();
    return 0;
}
void display()
{
    cout << "The value of global variable num is " << num << "."<<endl;
}