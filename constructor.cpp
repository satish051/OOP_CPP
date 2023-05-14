#include <iostream>
using namespace std;
class cube
{
public:
    int side;
    cube()
    {
        side = 10;
    }
};
class Employee
{
private:
    string name;

public:
    Employee(string Name)
    {
        name = Name;
    }
    string giveName()
    {
        return name;
    }
};
class copyConst
{
private:
    int x, y;

public:
    copyConst(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    copyConst(const copyConst &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    cout<<"21. Program to demonstrate default,parameterized and copy constructor"<<endl;
    // default constructor
    cube c;
    cout << "Default: "<<c.side << endl;
    // parameterized constructor
    Employee e = Employee("dipu");
    cout <<"Parameterized: "<< e.giveName() << endl;
    // copyconstructor
    copyConst c1 = copyConst(20, 30);
    copyConst c2 = c1;
    cout << "Copy Constructor\nOriginal: " << endl;
    c1.display();
    cout << "Copied: " << endl;
    c2.display();
    return 0;
}