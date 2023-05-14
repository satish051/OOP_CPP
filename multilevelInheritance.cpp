#include<iostream>
using namespace std;
class A{
    protected:
        float l,b;
    public:
    void getLB(){
        cout<<"Enter the length and breadth of the box: ";
        cin>>l>>b;
    }
};
class B:public A{
    protected:
        float area;
    public:
        void displayArea(){
            area=l*b;
            cout<<"Area of the base of box is: "<<area<<endl;
        } 
};
class C:public B{
    protected: 
        float h,volume;
    public:
    void getH(){
        cout<<"Enter height: ";
        cin>>h;
    }
    void displayVolume(){
        volume=area*h;
        cout<<"The volume of the box is: "<<volume<<endl;
    }

};

int main()
{
    C c;
    c.getLB();
    c.displayArea();
    c.getH();
    c.displayVolume();
    return 0;
}
