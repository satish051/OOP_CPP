// program to find the total marks of each student in Physics chemistry and mathematics
#include <iostream>
using namespace std;
class Marks
{
protected:
    int roll;
    float total;
    string name;
};
class Physics : virtual public Marks
{
protected:
    float physics;

public:
    void getPhyMark()
    {
        cout << "Enter the Marks obtained in Physics: ";
        cin >> physics;
    }
};
class Chemistry : virtual public Marks
{
protected:
    float chemistry;

public:
    void getChemMarks()
    {
        cout << "Enter the Marks obtained in Chemistry: ";
        cin >> chemistry;
    }
};
class Maths : virtual public Marks
{
protected:
    float maths;

public:
    void getMathMarks()
    {
        cout << "Enter the Marks obtained in Maths: ";
        cin >> maths;
    }
};
class Result : public Physics, public Chemistry, public Maths
{
public:
    void getName()
    {
        cout << "Enter the name of the sudent: ";
        cin >> name;
    }
    void giveResult()
    {
        total = physics + chemistry + maths;
        cout << roll <<". "<< "Name: " << name << endl
             << "Total marks: " << total << endl
             << "Average marks: " << total / 5 << endl;
    }
    void rollno(int r)
    {
        roll = r;
    }
};
int main()
{
    int n, i;
    cout << "Enter the number of the students: ";
    cin >> n;
    Result r[n];
    for (i = 0; i < n; i++)
    {
        int m = i;
        r[i].rollno(++m);
        r[i].getName();
        r[i].getPhyMark();
        r[i].getChemMarks();
        r[i].getMathMarks();
    }
    cout << "The Results are:" << endl;
    for (i = 0; i < n; i++)
    {
        r[i].giveResult();
    }
    return 0;
}