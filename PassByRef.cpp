#include<iostream>
using namespace std;
void fun (int &x) // address passed into the function instead of value so the default value of the variable changes.
{
    x--;
}
int main()
{
    cout<<"16. Program to demonstrate pass by Reference"<<endl;
    int a=5;
    cout << a << endl;
    fun(a);
    cout << a << endl;
    return 0;
}