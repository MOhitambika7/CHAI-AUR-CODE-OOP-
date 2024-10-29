// This code is for checking what output will be displayed in the terminal after using different datatypes.
#include <iostream>
using namespace std;
int main()
{
    unsigned smallTeapack = -100;
    cout << smallTeapack << endl; // This will give the garbage value in output.

    int SmallTeapack = -15;
    cout << SmallTeapack << endl;

    long largeTeaStorage = 10000000000;
    cout << largeTeaStorage << endl; // Long datatype --> for diplaying large values in terminal.


    return 0;
}