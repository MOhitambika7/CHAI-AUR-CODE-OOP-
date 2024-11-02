#include <iostream>
using namespace std;
int main()
{
    int teaBags;
    cout << "The number of tea bags person 'A' has:-" << endl;
    cin >> teaBags;

    if (teaBags < 10)
    {
        teaBags += 5;
    }

    cout << "The total number of tea bags person 'A' has:-" << teaBags;
    return 0;
}