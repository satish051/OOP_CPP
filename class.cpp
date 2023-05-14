#include<iostream>
using namespace std;

class A{
    public:
    int b;
    void display(){
        cout<<"b is "<<b;
    }
    
};
int main()

{
    A obj;
    obj.b=5;
    obj.display();
    return 0;
}