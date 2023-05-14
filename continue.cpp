#include<iostream>
using namespace std;
 
 int main()
 {
    int i;
    for ( i = 0; i < 11; i++)
    {
        if (i==5)
        {
            continue;    
        }
        cout<<i<<" ";
        
    }
    
 }