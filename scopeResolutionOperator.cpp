#include <iostream>
using namespace std;

class cube
{
public:
   int side;
   int getVolume();
};
int cube::getVolume()
{
   return side * side * side;
}
int main()
{
   cout<<"23. Program to demonstrate scope resolution Operator"<<endl;
   cube c;
   cout << "Enter side: ";
   cin >> c.side;
   cout << c.getVolume();
   return 0;
}