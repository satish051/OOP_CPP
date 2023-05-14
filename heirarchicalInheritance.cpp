#include <iostream>
using namespace std;
class A
{
protected:
    float num1, num2;

public:
    void getNum()
    {
        cout << "Enter the two numbers: ";
        cin >> num1 >> num2;
    }
};
class B : public A
{
public:
    void product()
    {
        cout << "The product of the two numbers is : " << num1 * num2 << endl;
    }
};
class C : public A
{
public:
    void sum()
    {
        cout << "The sum of the two numbers is : " << num1 + num2 << endl;
    }
};
int main()
{
    B p;
    C s;
    cout << "For Product" << endl;
    p.getNum();
    p.product();
    cout << "For Sum" << endl;
    s.getNum();
    s.sum();
    return 0;
}