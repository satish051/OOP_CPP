#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "This is base class." << endl;
    }
    void print()
    {
        cout << "Print base class" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "This is derived class." << endl;
    }
    void print(){
        cout<<"Print derived class. "<<endl;
    }
};
int main()
{
    base*  bptr;
    derived d;
    bptr=&d;
    bptr->print();//compile time
    bptr->show();//run time
    return 0;
}