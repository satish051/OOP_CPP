#include <iostream>
using namespace std;
int main()
{
    cout << "\n6. Program to illustrate implicit and explicit type conversion.\n";
    int x = 11;
    float y = 3.14;
    double number;
    number = x - y; // implicit type conversion.
    cout << "Implicit type conversion : " << number << endl;
    y = (double)x / 2; // explicit type conversion.
    cout << "Explicit type conversion : " << y;
    return 0;
}
