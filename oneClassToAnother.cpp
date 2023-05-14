#include<iostream>
using namespace std;
class Time{
int hrs,min;
public:
Time(int h, int m){
    hrs=h;
    min=m;
}
int getminutes()
{
    int totmin=(hrs*60)+min;
    return totmin;
}
void display()
{
    cout<<"Hours: "<<hrs<<endl;
    cout<<"Minutes: "<<min<<endl;
}
};
class minute{
    int min;
    public:
    minute()
    {
        min=0;
    }
    void operator=(Time t)
    {
        min=t.getminutes();
    }
    void display()
    {
        cout<<"Total minutes: "<<min<<endl;
    }
};
int main()
{
    int h,m;
    cout<<"Enter Hours: ";
    cin>>h;
    cout<<"Enter Minutes: ";
    cin>>m;
    Time t(h,m);
    t.display();
    minute min;
    min=t;
    min.display();
    return 0;

}