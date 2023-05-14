#include<iostream>
#include<cstring>
using namespace std;

int main(){
    cout<<"25. Program to demonstrate dynamic memory allocation in c++"<<endl;
    string *p;
    p= new string;
    *p="hello";
    cout<<*p<<endl;
    int *ptr;
    ptr=new int;
    *ptr=10;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    delete ptr,p;
    return 0;
}