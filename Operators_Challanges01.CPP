/*WAP that allows user to input the number of tea bags they have. Assign additional bags to them based on the certain conditions(eg., if they have fewer than 10 bags, give them 5 extra). Update the original number using assignment operator*/

#include <iostream>
using namespace std;
int main()
{
    int teaBags;
    cout << "Enter the number of tea bags person 'A' has:-" << endl;
    cin >> teaBags;

    if (teaBags < 10)
    {
        int TeaBags = teaBags + 5;
        cout << "The updated number of tea bags after adding 5 extra bags is:-" << TeaBags << endl;
    }

    else
    {
        cout << "The number of tea bags the person 'A' has:-" << teaBags << endl;
    }

    return 0;
}