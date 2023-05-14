#include <iostream>
using namespace std;
class rect
{
private:
    float length, breadth, area;

public:
    void set(float x, float y)
    {
        length = x;
        breadth = y;
    }
    void arearect(rect obj1)
    {
        area = obj1.length * obj1.breadth;
        cout << "Area is " << area;
    }
};

int main()
{
    cout<<"28. Program to show objects as function arguments\n";
    rect r1;
    r1.set(10, 5);
    r1.arearect(r1);
    return 0;
}