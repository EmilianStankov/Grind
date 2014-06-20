#include <iostream>
#include "QuarterPipe.h"

using namespace std;

QuarterPipe::QuarterPipe()
{
	this->scoreBonus = rand() % 150 + 1;
	this->grindable = false;
}