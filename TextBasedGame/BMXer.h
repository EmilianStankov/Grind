#ifndef BMXER_GUARD
#define BMXER_GUARD

#include "Player.h"
#include <iostream>
#include <string>

class BMXer : public Player
{
private:
	int chanceToLand = this->getLevel() + this->getStamina() / 2;
public:
	BMXer(std::string name);
	void trick1();
	void trick2();
	void trick3();
	void trick4();
	void trick5();
	void trick6();
	void trick7();
	void trick8();
	void trick9();
	void trick10();
	void trick11();
	void trick12();
	void trick13();
};
#endif