#include<iostream>
using namespace std;

class Triangle{
    private:
    float Base,Height;

    public:
    void getBase(){
        cout<<"Enter Base: ";
        cin>>Base;
    }
    void getHeight(){
        cout<<"Enter Height: ";
        cin>>Height;
    }
    float Area(){
        return 0.5*Height*Base;
    }
};
int main(){
    cout<<"19. Program to find area of triangle using class and objects"<<endl;
    cout<<"Area of a right-angled triangle:"<<endl;
    Triangle t;
    t.getBase();
    t.getHeight();

    cout<<"Area of Triangle is "<<t.Area();

}