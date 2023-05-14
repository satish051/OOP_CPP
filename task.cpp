#include<iostream>
using namespace std;
class minutes{
    int hrs,min,t;
    public:
    void getTime(){
        cout<<"Enter Hours:";
        cin>>hrs;
        cout<<"Enter Minutes:";
        cin>>min;
    }
    minutes operator=(minutes m){
        minutes m1=m;

    }
    int display(){
        return t;
    }
};
int main(){
    minutes m1,m2;
    m1.getTime();
    m2=m1;
    cout<<"The time in minutes is "<<m2.display();
    return 0;


}