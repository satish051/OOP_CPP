#include <iostream>
#define pi 3.14;
using namespace std;

int main()
{
    float radius, Area;
    cout<<"2. Program to find area of a circle using define directives"<<endl;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    Area = radius * radius * pi;
    cout<<"Area of circle is "<<Area<<" sq.units."<<endl;
    return 0;
}