#include <iostream>
using namespace std;
int main()
{
    cout<<"7. Program to store the score of n students and display it"<<endl;
    int number, i;
    cout << "Enter the total number of the students : ";
    cin >> number;
    float *p;
    p = new float[number]; //? new is a keyword.
    cout << "Enter the score of the students : " << endl;
    for (i = 1; i <= number; i++)
    {
        cout << "Student " << i << " : ";
        cin >> *(p + i);
    }
    cout << "Printing the score of students : " << endl;
    for (i = 1; i <= number; i++)
    {
        cout << "Student " << i << " : " << *(p + i) << endl;
    }
    cout<<*(p+0)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    delete[] p;
    return 0;
}
