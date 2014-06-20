#include <iostream>
#include "ParkPiece.h"

using namespace std;

int ParkPiece::getScoreBonus()
{
	return this->scoreBonus;
}

bool ParkPiece::isGrindable()
{
	return this->grindable;
}