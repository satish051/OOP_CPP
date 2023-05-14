#include<iostream>
using namespace std;

int main()
{
    int n, i=1,sum=0;
    cout<<"Enter the number up to which you want to find the sum up to:"<<endl;
    cin>>n;
    do{
        sum=sum+i;
        i++;
    }while(i<=n);
    cout<<"The sum up to "<<n<<" is "<<sum<<"."<<endl;
    return 0;

}
