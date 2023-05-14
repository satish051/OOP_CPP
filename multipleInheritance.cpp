#include<iostream>
using namespace std;
class Subject{
    protected:
    float m1,m2,m3,m4,m5;
    public:
    void getMarks(){
        cout<<"Enter the marks of five subjects of a student(Full marks = 100 each): ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
};
class Sports{
    protected:
    float score;
    public:
    void getScore(){
        cout<<"Enter the Points obtained in Basketball: ";
        cin>>score;
    }
};
class Student:public Subject, public Sports{
        float markssum,GPA,average;
        public:
        void calculateGPA(){
            markssum=m1+m2+m3+m4+m5;
            average=markssum/5;
            GPA=average/25;
        }
        void display(){
            cout<<"The GPA of the student is:"<<GPA<<endl;
            cout<<"The student scored "<<score<<" points in the basketball match."<<endl;
        }
};
int main()
{
    Student s;
    s.getMarks();
    s.getScore();
    s.calculateGPA();
    s.display();
}
