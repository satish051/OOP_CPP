#include<iostream>
using namespace std;
class Student{
    private:
        int rollno;
        string name;
    public:
    int getRollno(){
        return rollno;
    }
    void setRollno(){
        int r;
        cout<<"Enter roll:";
        cin>>r;
        rollno=r;
    }
    string getName(){
        return name;
    }
    void setName(){
        string Name;
        cout<<"Enter Name:";
        cin>>Name;
        name=Name;
    }
};

int main(){
    Student s[5];
    int i,j;
    for(i=0;i<5;i++){
        s[i].setName();
        s[i].setRollno();
    }
    for(i=0;i<5;i++){
        j=i;
        cout<<"Student "<<++j<<":"<<endl;
        cout<<"Name: "<< s[i].getName()<<endl;
        cout<<"Roll no: "<<s[i].getRollno()<<endl<<endl;
    }
    return 0;

}
