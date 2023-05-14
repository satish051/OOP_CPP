#include<iostream>
using namespace std;
class student{
    private:
        int rollno;

    public:
    int getRollno(){
        return rollno;
    }
    void setRollno(int r){
        rollno=r;
    }
};
int main(){
    student A;
    A.setRollno(1);
    cout<<"Roll no:"<<A.getRollno();
    return 0;
}