#include<iostream>
using namespace std;
int num;
int &fun();
int main()
{
    cout<<"17. Program to demonstrate return by Reference"<<endl;
    fun()=6;
    cout << num << endl;
    return 0;
}
int &fun()
{
    return num;
}