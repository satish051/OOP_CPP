#include <iostream>
using namespace std;
class Distance
{
private:
    int m;
    friend int add(Distance);

public:
    Distance() : m(0)
    {
    }
};
int add(Distance d)
{
    d.m += 5;
    return d.m;
}
int main()
{
    Distance d1;
    cout << "Distance is : " << add(d1);
    return 0;
}