#include<iostream>
using namespace std;
int main()
{
    int a, b, HCF,LCM;
    cout<<"3. Program to find HCF and LCM of two numbers "<<endl;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    if(a<b)
    {
        HCF=a;
    }
    else{
        HCF=b;
    }
    while(1)
    {
        if(a%HCF==0 && b%HCF==0)
        {
            break;
        }
        HCF--;
    }
    cout<< "HCF ("<<a<<","<<b<<") = "<<HCF<<endl;
    LCM= (a*b)/HCF;
    cout<< "LCM ("<<a<<","<<b<<") = "<<LCM<<endl;
    return 0;

}