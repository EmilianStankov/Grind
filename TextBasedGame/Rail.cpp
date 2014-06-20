#include <iostream>
#include "Rail.h"

using namespace std;

Rail::Rail()
{
	this->scoreBonus = rand() % 200 + 1;
	this->grindable = true;
}