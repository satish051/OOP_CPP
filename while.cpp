#include<iostream>
using namespace std;
 int main()
 {
    int i=1,n,sum=0;
    cout<<"Enter the number up to which you want to find the sum up to:"<<endl;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum up to "<<n<<" is "<<sum<<"."<<endl;
    return 0;
 }