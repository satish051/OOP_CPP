#include <iostream>
using namespace std;
class Time
{
    int hrs, min;

public:
    Time(int);
    void display();
};
Time::Time(int t)
{
    cout << "Basic Type to Class type" << endl;
    hrs = t / 60;
    min = t % 60;
}
void Time::display()
{
    cout << hrs << "hrs" << endl;
    cout << min << "min" << endl;
}
int main()
{
    int dur;
    cout << "Enter the time duration in minutes: ";
    cin >> dur;
    Time t1(dur);
    t1.display();
    return 0;
}