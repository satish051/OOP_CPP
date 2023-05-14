#include<iostream>
using namespace std;
class Abstract{
    private:
    string info;
    public:
    virtual void print()=0;

};
class Concrete{
private:
string info;
public:
void print(){
    cout<<"Concrete Information "<<info<<endl;
}
Concrete(string s):info(s){

}
};
int main(){
    string s;
    s="Hello";
    Concrete c(s);
    c.print();
    return 0;
}