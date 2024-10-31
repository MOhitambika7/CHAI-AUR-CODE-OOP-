#include <iostream>
using namespace std;
int main()
{
    float teaPrice = 49.99;
    int rounded_teaPrice = (int)teaPrice;
    short Rounded_teaPrice = (short)teaPrice;
    cout << rounded_teaPrice << endl;
    cout << Rounded_teaPrice << endl;

    int teaQuantity = 2;
    double Total_teaPrice = teaPrice * teaQuantity;
    cout << Total_teaPrice << endl;
    return 0;
}