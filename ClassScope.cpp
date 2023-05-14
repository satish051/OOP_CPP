#include<iostream>
using namespace std;
class A{
    private:	//specific to this class and can be used under this class(Unavailable to any other class or function)
        float length, breadth ;	// can be used only throughout this class A

    public: // can be used anywhere in program when declared public
        void getLen(){
            cout << "Enter the length :";
            cin>>length; // takes it from this class and can be used by functions under this class only
        }

        void getBre(){
            cout << "Enter the breadth :";
            cin>>breadth;// takes it from this class and can be used by functions under this class only
        }

        float area(){
            return length*breadth;
        }

        void displayArea(){
            cout << "The area of the rectangle is " << area() << " sq units."<<endl;
        }
};
int main()
{
    A area;
    cout<<"13. Program to show class scope."<<endl;
    area.getLen();	//Public function with private parameters
    area.getBre();
    area.displayArea();
    return 0;


}
