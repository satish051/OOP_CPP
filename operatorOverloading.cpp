#include<iostream>
using namespace std;
class count{
    public:
    int countplus;
    int countminus;
    count(){
        countplus=0;
        countminus=3;
    }
    void operator ++(){
        ++countplus;
    }
    void operator --(){
        --countminus;
    }
};
int main(){
    count x, y;
    cout<<"x = "<<x.countplus<<endl;
    cout<<"y = "<<y.countminus<<endl;
    ++x;
    --y;
    cout<<"After Increment:"<<endl;
    cout<<"x = "<<x.countplus<<endl;
    cout<<"y = "<<y.countminus<<endl;
    return 0;
}