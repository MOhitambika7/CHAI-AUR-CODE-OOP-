#include<iostream>
using namespace std;
int main()
{
    int teaLeaves = 100;
    float waterTemperature = 85.99;
    double priceOfTea = 299.98348;
    char teaGrade = 'A';
    bool is_teaReady = false;

    cout << "The number of packets used to prepare tea for a day:-" << teaLeaves << endl;
    cout << "The temperature of water used to prepare best tea is:-" << waterTemperature << endl;
    cout << "The price for each cups of tea is:-" << priceOfTea << endl;
    cout << "The grade of tea for best sale is:-" << teaGrade << endl;
    cout << "Is tea ready? :-" << is_teaReady << endl;

    return 0;
}