#include<iostream>
#include<cstring>
using namespace std;
class copyconstructor
{
    char *s_copy;
    public:
        copyconstructor(const char *str)
        {
            s_copy=new char[16];
            strcpy(s_copy,str);
        }
        copyconstructor(const copyconstructor &str)
        {
            s_copy=new char[16];
            strcpy(s_copy,str.s_copy);
        }
        void concatenate(const char *str)
        {
            strcat(s_copy,str);
        }
        ~copyconstructor(){
            delete[] s_copy;
        }
        void display()
        {
            cout<<s_copy<<endl;
        }
};
int main()
{
    copyconstructor c1("copy");
    copyconstructor c2=c1;
    c1.display();
    c2.display();
    c1.concatenate("constructor");
    c1.display();
    c2.display();
    return 0;
}