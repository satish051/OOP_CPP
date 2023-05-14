#include <iostream>
using namespace std;
class pricecomparison
{
private:
    int price;

public:
    void getdata()
    {
        cin >> price;
    }
    bool operator==(const pricecomparison &p)
    {
        if (price == p.price)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    pricecomparison p1, p2;
    cout << "Enter the price of the first product: ";
    p1.getdata();
    cout << "Enter the price of second product: ";
    p2.getdata();
    if (p1 == p2)
    {
        cout << "The price of first is equal to the second" << endl;
    }
    else
    {
        cout << "The price of the first is not equal to the second" << endl;
    }
    return 0;
}