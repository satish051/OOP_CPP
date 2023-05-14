#include<iostream>
using namespace std;
class Base{
    public:
    int a,b,s;
    void setab(){
        cout<<"Enter the two values a and b: ";
        cin>>a>>b;
        s=a+b;
    }
};
class Child:public Base
{
    public:
    int c,sum;
    void setc(){
        cout<<"Enter the value of c:";
        cin>>c;
        sum=s+c;
    }
    void display(){
        cout<<"The sum of three numbers is: "<<sum<<endl;
    }
};
int main()
{
    Child c;
    c.setab();
    c.setc();
    c.display();
    return 0;
}