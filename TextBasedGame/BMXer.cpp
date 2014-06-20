#include <iostream>
#include "BMXer.h"

using namespace std;

BMXer::BMXer(string name)
{
	this->name = name;
}

void BMXer::trick1()
{
	cout << "You attempt a bunny hop." << endl;
	this->setStamina(-2);
	this->land(100);
}

void BMXer::trick2()
{
	cout << "You attempt a barspin." << endl;
	this->setStamina(-8);
	this->land(500);
}

void BMXer::trick3()
{
	cout << "You attempt a tailwhip." << endl;
	this->setStamina(-12);
	this->land(750);
}

void BMXer::trick4()
{
	cout << "You attempt a 360." << endl;
	this->setStamina(-7);
	this->land(250);
}

void BMXer::trick5()
{
	cout << "You attempt a 180." << endl;
	this->setStamina(-5);
	this->land(200);
}

void BMXer::trick6()
{
	cout << "You attempt a tiregrab." << endl;
	this->setStamina(-4);
	this->land(250);
}

void BMXer::trick7()
{
	cout << "You attempt an X-up." << endl;
	this->setStamina(-3);
	this->land(300);
}

void BMXer::trick8()
{
	cout << "You attempt a can-can." << endl;
	this->setStamina(-6);
	this->land(400);
}

void BMXer::trick9()
{
	cout << "You attempt to double peg grind." << endl;
	this->setStamina(-5);
	this->land(350);
}

void BMXer::trick10()
{
	cout << "You attempt to ice pick grind." << endl;
	this->setStamina(-8);
	this->land(600);
}

void BMXer::trick11()
{
	cout << "You attempt to toothpick grind." << endl;
	this->setStamina(-10);
	this->land(650);
}

void BMXer::trick12()
{
	cout << "You attempt to feeble grind." << endl;
	this->setStamina(-6);
	this->land(500);
}

void BMXer::trick13()
{
	cout << "You attempt to smith grind." << endl;
	this->setStamina(-7);
	this->land(550);
}