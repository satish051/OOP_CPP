#include<iostream>
using namespace std;
int main(){
    unsigned short x=0xFFFF;
    cout<<hex<<x<<endl;
    x=~x;
    cout<<hex<<x<<endl;
    return 0;
}