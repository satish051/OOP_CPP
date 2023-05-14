#include<iostream>
using namespace std;
int num; //Global variable which can be used throughout the whole program //Global scope
int main()
{
    num=5;
    cout<<"12. Program to show local scope and global scope."<<endl; 
    int dig=6;//Local scope
    cout<<"Local variable: "<<dig<<endl;
    cout<< "Global variable: "<<num<<endl;
    return 0;
}