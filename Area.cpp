#include<iostream>
using namespace std;

class Rectangle{
    private:
    float Length,Breadth;

    public:
    void getLen(){
        float length;
        cout<<"Enter Length: ";
        cin>>length;
        Length=length;
    }
    void getBre(){
        float breadth;
        cout<<"Enter Breadth: ";
        cin>>breadth;
        Breadth=breadth;
    }
    float Area(){
        return Length*Breadth;
    }
};
int main(){
    Rectangle r;
    r.getLen();
    r.getBre();

    cout<<"Area is "<<r.Area();

}