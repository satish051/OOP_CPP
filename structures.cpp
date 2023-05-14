#include<iostream>
using namespace std;
struct Employee{
    char name[20];
    int salary;

};
int main(){
    cout<<"20. Program to demonstrate structures in C++\n";
    struct Employee e1;
    cout<<"Enter the name:";
    cin>>e1.name;
    cout<<"Enter salary:";
    cin>>e1.salary;
    cout<<"Name: "<<e1.name<<"\nSalary: "<<e1.salary<<endl;
    return 0;

}