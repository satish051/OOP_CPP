#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    cout<<"6. Program to show switch case statement."<<endl;
    cout<<"Basic arithmetic operations between two numbers"<<endl;
    cout<< "Enter two numbers:";
    cin>>a>>b;
    cout<<"1. + for addition\n"<<"2. - for subtraction "<<endl;
    cout<<"3. * for multiplication\n"<<"4. - for division "<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"Addition = "<< a+b<<endl;
        break;

        case '-':
        cout << "Subtraction = "<<a-b<<endl;
        break;

        case '*':
        cout << "Multiplication = "<< a*b<< endl;
        break;

        case '/':
        cout << "Division = "<<(float)a/(float)b<<endl;
        break;


        default:
        cout<<"Wrong Choice!!!"<<endl;

    }
    return 0;
}