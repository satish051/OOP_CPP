#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int *p=arr;
    cout<<"8. Program to demonstrate pointer and arrays."<<endl;
    cout<<"Values of array:"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<*(p+i)<<" ";
    }
    cout<<endl<<"Addresses of array members:"<<endl;    
    for(int i=0;i<7;i++)
    {
        cout<<(p+i)<<" ";
    }
    return 0;
}
