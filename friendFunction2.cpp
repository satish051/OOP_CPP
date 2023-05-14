#include <iostream>
using namespace std;
class class_B;
class classA
{
public:
    classA() : numA(6)
    {
    }

private:
    int numA;
    friend int add(classA, class_B);
};
class class_B
{
public:
    class_B() : num_B(7)
    {
    }

private:
    int num_B;
    friend int add(classA, class_B);
};
int add(classA obj, class_B obj2)
{
    return (obj.numA + obj2.num_B);
}
int main()
{
    classA obj;
    class_B obj2;
    cout << "Addition is: " << add(obj, obj2);
    return 0;
}