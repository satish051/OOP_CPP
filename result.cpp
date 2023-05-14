#include <iostream>
using namespace std;
class Student
{
private:
    string sname;
    float marks[5];
    int tmax = 500;
    float total = 0;

public:
    void assign()
    {
        cout << "Enter the student's name: ";
        cin >> sname;
        cout << "Enter the marks of the student in the order: " << endl;
        cout << "1. OOP\n2. Maths\n3.Statistics\n4.Microprocessor\n5.Discrete Structure" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total = total + marks[i];
        }
    }
    float compute()
    {
        return total / 5;
    }
    void display()
    {
        cout << "Result of " << sname << endl;
        cout << "Marks:" << endl;
        cout << "1. OOP: " << marks[0] << endl;
        cout << "2. Maths: " << marks[1] << endl;
        cout << "3. Statistics : " << marks[2] << endl;
        cout << "4. Microprocessor: " << marks[3] << endl;
        cout << "5. Discrete Structure: " << marks[4] << endl;
        cout << "Average: " << compute() << endl;
    }
};
int main()
{
    cout<<"24. Program to implement a class STUDENT with sname, marks array,total\n and tmax as data members and assign,compute\n and display functions to print the result of a student"<<endl;
    Student s;
    s.assign();
    s.display();
    return 0;
}
