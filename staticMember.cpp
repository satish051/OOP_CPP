#include<iostream>
using namespace std;
class A{
    int a;
    static int b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    static void display(){
        cout<<b<<endl;
    }
};
int A::b=0;
int main()
{
    cout<<"30. Program to demonstrate static data  members in c++\n";
    A obj1(10,20),obj2(20,30);
    obj1.show();
    obj2.show();
    A::display();
    obj2.show();
    return 0;

}