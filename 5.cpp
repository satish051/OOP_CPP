//C++ program to illustrate setw, setprecision and setfill.
#include <iostream>
#include<iomanip>
using namespace std;

int main ()
{
    cout<<"5. Program to illustrate setw, setprecision and setfill." <<endl;
     float a = 3.33333333;
     int b = 3333;
     cout << "Before using setw:" << endl;
     cout << a << endl;
     cout << "After using setw:" << endl;
     cout << setw(10) << a << endl;
     cout << "Before using setprecision:" << endl;
     cout << a << endl;
     cout << "After using setprecision:" << endl;
     cout << setprecision(3) << a << endl;
     cout << "Before setting the fill char: \n"
          << setw(10);
     cout << b << endl;
     cout << "After setting the fill char"
          << " setfill to *: \n"
          << setfill('*')
          << setw(10);
     cout << b << endl;
    return 0;

}