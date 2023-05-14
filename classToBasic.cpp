#include<iostream>
using namespace std;
class Time{
int hrs,min;
public:
Time(int,int);
operator int();
};
Time::Time(int a, int b)
{
    hrs=a;
    min=b;
}
Time::operator int(){
    return(hrs*60+min);
}
int main()
{
    int h,m,duration;
    cout<<"Enter hours:";
    cin>>h;
    cout<<"Enter minutes: ";
    cin>>m;
    Time t(h,m);
    duration=t;
    cout<<"total minutes are: "<<duration;
    return 0;
}