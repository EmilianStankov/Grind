#ifndef PLAYER_GUARD
#define PLAYER_GUARD

#include <string>
#include <iostream>

class Player
{
protected:
	std::string name;
	int maxStamina = 100;
	int level = 1;
	int stamina = maxStamina;
	int score = 0;
	int chanceToLand = this->getLevel() * 3 + this->getStamina() / 2;
	int getRandomNumber();
public:
	Player();
	Player(std::string name);
	std::string getName();
	int getLevel();
	int getMaxStamina();
	int getStamina();
	void setLevel(int x);
	void setMaxStamina(int x);
	void setStamina(int x);
	void levelUp();
	void land(int score);
	void checkScore();
	void printStatus();

	virtual void trick1();
	virtual void trick2();
	virtual void trick3();
	virtual void trick4();
	virtual void trick5();
	virtual void trick6();
	virtual void trick7();
	virtual void trick8();
	virtual void trick9();
	virtual void trick10();
	virtual void trick11();
	virtual void trick12();
	virtual void trick13();
};
#endif