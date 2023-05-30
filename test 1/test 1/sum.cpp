
#include "sum.h"
#include <iostream>
using namespace std;

sum::sum(int a, int b)
{
	score = a;
	total = b;
	dosum = score + total;

}

int sum::tot()
{
	return dosum;
}