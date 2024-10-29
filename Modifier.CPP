// This code is for checking what output will be displayed in the terminal after using different datatypes.
#include<iostream>
using namespace std;
int main()
{
    unsigned smallTeapack = -100;
    cout << smallTeapack << endl; // This will give the garbage value in output.

    int SmallTeapack = -15;
    cout << SmallTeapack << endl;

    return 0;
}