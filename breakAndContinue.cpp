#include<iostream>
using namespace std;
 
 int main()
 {
    int i;
    cout<<"5. Program to show break and continue statements."<<endl;
    cout<<"Break: ";
    for ( i = 0; i < 11; i++)
    {
        if (i==5)
        {
            break;    
        }
        cout<<i<<" ";
        
    }
    cout<<"\n"<<"Continue: ";
    for ( i = 0; i < 11; i++)
    {
        if (i==5)
        {
            continue;    
        }
        cout<<i<<" ";
        
    }
    return 0;
 }