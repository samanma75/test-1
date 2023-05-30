#include "score.h"
#include <iostream>
using namespace std;

score::score(int a)
{

	i = a;

}

void score::print()
{
    switch (i)
    {
    case 0:
        cout << "Enter the installation score" << endl;
        break;
    case 1:
        cout << "Enter the material definition score" << endl;
        break;
    case 2:
        cout << "Enter the geometry definition score" << endl;
        break;
    case 3:
        cout << "Enter the source definition score" << endl;
        break;
    case 4:
        cout << "Enter the general example score" << endl;
        break;
    default:
        cout << "Enter the root score" << endl;
        break;
    }
}