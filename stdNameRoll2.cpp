#include<iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;

    Student(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Roll number: ";
        cin>>roll;
    }
};

int main(){
    Student s[5];
    int i;
        for (i=0;i<5;i++)
        {
            cout<<" Name: "<<s[i].name<<endl;
            cout<<" Roll: "<< s[i].roll<<endl<<endl;
        }
        return 0;
}