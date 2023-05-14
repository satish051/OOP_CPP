#include<iostream>
using namespace std;

class Box{
    private:
    float Length,Breadth,Height;

    public:
    void getLen(){
        cout<<"Enter Length: ";
        cin>>Length;
    }
    void getBre(){
        cout<<"Enter Breadth: ";
        cin>>Breadth;  
        }
    void getHei(){
        cout<<"Enter Height: ";
        cin>>Height;
    }
    float Area(){
        return Length*Breadth;
    }
    float Volume(){
        return Length*Breadth*Height;
    }
};
int main(){
    cout<<"20.Program to find area of three boxes using class and objects\n";
    Box b[3];
    int i;
    for(i=0;i<3;i++){
        b[i].getLen();
        b[i].getBre();
        b[i].getHei();
    }
    for (i=0;i<3;i++){
        int v=i;
        cout<< "The area of box "<< ++v << "is "<< b[i].Area()<<endl;
        cout<< "The volume of box "<< v << "is "<< b[i].Volume()<<endl;
    }
    return 0;



}