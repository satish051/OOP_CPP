#include<iostream>
using namespace std;
int x,y;
void input();
void sum();
void product();

int main()
{
    input();
    if(x==y)
    {
        sum();
    }
    else 
    {
        product();
    }
    return 0;
}
void input()
{
    cout << "Enter two values :"<< endl;
    cin>>x>>y;
}

void sum(){
    cout << "The sum of two numbers is "<< x+y << ".";
}

void product(){
    cout << "The product of two numbers is "<< x*y << ".";
}