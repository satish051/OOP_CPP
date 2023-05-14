#include <iostream>
using namespace std;
class Shape
{
protected:
    float dimension1,dimension2;

public:
    void getDimension()
    {
        cin >> dimension1;
    }
    void getDimension2(){
        cin>>dimension2;
    }
    // pure virtual Function
    virtual float calculateArea() = 0;
};
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension1 * dimension1;
    }
};
class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension1 * dimension1;
    }
};
class Rectangle: public Shape
{
    public:
    float calculateArea(){
        return dimension1*dimension2;
    }
};
int main()
{
    Square sq;
    Circle cir;
    Rectangle rect;

    cout << "Enter the length of the square: ";
    sq.getDimension();
    cout << "Area of square: " << sq.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    cir.getDimension();
    cout << "Area of circle: " << cir.calculateArea() << endl;

    cout<<"Enter the length and breadth of the rectangle:";
    rect.getDimension();
    rect.getDimension2();
    cout<<"Area of rectangle: "<<rect.calculateArea()<<endl;
    return 0;
}