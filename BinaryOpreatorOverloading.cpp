#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void getValue()
    {
        cout << "Enter the value of real number: ";
        cin >> real;
        cout << "Enter the value of imaginary number: ";
        cin >> img;
    }
    complex operator+(complex obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return (temp);
    }

    void display()
    {
        cout << real << " + "
             << "(" << img << ")"
             << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getValue();
    c2.getValue();
    c3 = c1 + c2;
    cout << "Result is " << endl;
    c3.display();
    return 0;
}