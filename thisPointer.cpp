#include <iostream>
using namespace std;
class A
{
private:
    int num;
    char ch;

public:
    void setValues(int num, char ch)
    {
        this->num = num;
        this->ch = ch;
    }
    void display()
    {
        cout << num << endl;
        cout << ch;
    }
};
int main()
{
    A obj;
    obj.setValues(100, 'A');
    obj.display();
    return 0;
}