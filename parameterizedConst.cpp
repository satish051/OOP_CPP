#include<iostream>
using namespace std;

class cube{
    public:
        int side;
    cube(int x){
        side=x;
}
};
        int main(){
        cube c1(10);
        cube c2(20);
        cout<<c1.side<<endl;
        cout<<c2.side;
}