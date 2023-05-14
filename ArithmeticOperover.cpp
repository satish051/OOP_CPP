#include<iostream>
using namespace std;
class complex
{
        int real ,img;
    public:
    void getValue()
    {
        cout<<"Enter the value of real number: ";
        cin>>real;
        cout<<"Enter the value of imaginary number: ";
        cin>>img;
    }
    complex operator +(complex obj)
    {
        complex temp;
        temp.real=real+obj.real;
        temp.img = img + obj.img;
        return (temp);
    }

    void display()
    {
        cout<<real<<" + ("<<img<<")i"<<endl;
    }
};
int main()
{
    complex c1,c2,s;
    c1.getValue();
    c2.getValue();
    s=c1+c2;
    cout<<"Entered values:"<<endl;
    c1.display();
    c2.display();
    cout <<"Result is: "<<endl;
    s.display();
    return 0;
}