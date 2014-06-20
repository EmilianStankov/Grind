#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	this->name = "No Name";
}

Player::Player(string name)
{
	this->name = name;
}

string Player::getName()
{
	return this->name;
}

int Player::getLevel()
{
	return this->level;
}

int Player::getMaxStamina()
{
	return this->maxStamina;
}

int Player::getStamina()
{
	return this->stamina;
}

void Player::setLevel(int x)
{
	this->level = this->getLevel() + x;
}

void Player::setMaxStamina(int x)
{
	this->maxStamina = this->getMaxStamina() + x;
}

void Player::setStamina(int x)
{
	this->stamina = this->getStamina() + x;
	if (this->getStamina() >= this->getMaxStamina())
		this->stamina = this->getMaxStamina();
	else if (this->getStamina() <= 0)
	{
		cout << this->getName() << ", you feel tired! Keep trying!\n";
		this->stamina = this->getMaxStamina();
		this->score = 0;
	}
}

void Player::levelUp()
{
	this->setLevel(1);
	this->setMaxStamina(15);
	this->score = 0;
}

int Player::getRandomNumber()
{
	int number = rand() % 100 + 1;
	return number;
}

void Player::land(int score)
{
	if (this->chanceToLand >= this->getRandomNumber())
	{
		this->score += score;
		cout << "Success!\n\n";
	}
	else
	{
		cout << "You bail!\n\n";
	}
}

void Player::checkScore()
{
	if (this->score >= 2500 + this->getMaxStamina())
	{
		this->levelUp();
		cout << this->getName() << ", your skills improve!\n";
	}
}

void Player::printStatus()
{
	cout << this->getName() << ", Level: " << this->getLevel() << ", Stamina: "
		<< this->getStamina() << ", Score: " << this->score << endl << endl;
}

void Player::trick1(){}
void Player::trick2(){}
void Player::trick3(){}
void Player::trick4(){}
void Player::trick5(){}
void Player::trick6(){}
void Player::trick7(){}
void Player::trick8(){}
void Player::trick9(){}
void Player::trick10(){}
void Player::trick11(){}
void Player::trick12(){}
void Player::trick13(){}