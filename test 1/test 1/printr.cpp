
#include "printr.h"
#include <iostream>
using namespace std;

printr::printr(int a)
{
	
	total = a;

}

 void printr::print()
{
	 cout << "total score  is = " << total << endl;
}