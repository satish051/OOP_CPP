// hybrid inheritance
#include <iostream>
using namespace std;
class input
{
protected:
    int length;
    int breadth;

public:
    void getData()
    {
        cout << "Enter the length and breadth";
        cin >> length >> breadth;
    }
};
class area : public input
{
protected:
    int Area;

public:
    void getArea()
    {
        Area = length * breadth;
    }
};
class volume : public input
{
protected:
    int height;
    int Volume;

public:
    void getheight()
    {
        cout << "Enter height:";
        cin >> height;
    }
    void getVolume()
    {
        Volume = length * breadth * height;
    }
};
class print : public area, public volume
{
public:
    void display()
    {
        cout << "Area is " << Area << endl;
        cout << "Volume is " << Volume;
    }
};
int main()
{
    print A;
    A.getData();
    A.getArea();
    A.getheight();
    A.getVolume();
    A.display();
    return 0;
}