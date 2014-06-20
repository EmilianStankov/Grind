#ifndef PARKPIECE_GUARD
#define PARKPIECE_GUARD

#include <iostream>

class ParkPiece
{
protected:
	int scoreBonus;
	bool grindable;
public:
	bool isGrindable();
	int getScoreBonus();
};

#endif