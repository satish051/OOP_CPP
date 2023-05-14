#include <iostream>
using namespace std;
class Length
{
    int feet, inch;

public:
    Length(int);
    void display();
};
Length::Length(int l)
{
    cout << "Basic Type to Class type" << endl;
    feet = l / 12;
    inch = l % 12;
}
void Length::display()
{
    cout << feet << "feet" << endl;
    cout << inch << "inch" << endl;
}
int main()
{
    int dur;
    cout << "Enter the length in inch: ";
    cin >> dur;
    Length l1(dur);
    l1.display();
    return 0;
}