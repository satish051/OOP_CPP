#include<iostream>
using namespace std;
inline float area (float l, float b)
{
    return l*b;
}
int main()
{
    cout<<"18. Program to find area of a rectangle using Inline Function"<<endl;
    float len, bre, a;
    cout << "Enter the length and breadth of the rectangle:"<< endl;
    cin>> len >>bre;
    a = area(len,bre);  
    cout<< "The area is "<< a <<" sq units."<<endl;
    return 0;
}