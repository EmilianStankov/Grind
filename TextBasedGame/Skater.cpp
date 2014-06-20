#include "Skater.h"
#include <iostream>

using namespace std;

Skater::Skater(string name)
{
	this->name = name;
}

void Skater::trick1()
{
	cout << "You attempt an ollie." << endl;
	this->setStamina(-2);
	this->land(100);
}

void Skater::trick2()
{
	cout << "You attempt a kickflip." << endl;
	this->setStamina(-5);
	this->land(250);
}

void Skater::trick3()
{
	cout << "You attempt a heelflip." << endl;
	this->setStamina(-5);
	this->land(250);
}

void Skater::trick4()
{
	cout << "You attempt a shove-it." << endl;
	this->setStamina(-3);
	this->land(200);
}

void Skater::trick5()
{
	cout << "You attempt a hardflip." << endl;
	this->setStamina(-7);
	this->land(400);
}

void Skater::trick6()
{
	cout << "You attempt an indy grab." << endl;
	this->setStamina(-6);
	this->land(350);
}

void Skater::trick7()
{
	cout << "You attempt a nosegrab." << endl;
	this->setStamina(-4);
	this->land(300);
}

void Skater::trick8()
{
	cout << "You attempt a tailgrab." << endl;
	this->setStamina(-4);
	this->land(300);
}

void Skater::trick9()
{
	cout << "You attempt to fifty-fifty grind." << endl;
	this->setStamina(-8);
	this->land(400);
}

void Skater::trick10()
{
	cout << "You attempt to five-o grind." << endl;
	this->setStamina(-10);
	this->land(500);
}

void Skater::trick11()
{
	cout << "You attempt to tailgrind." << endl;
	this->setStamina(-8);
	this->land(400);
}

void Skater::trick12()
{
	cout << "You attempt to nosegrind." << endl;
	this->setStamina(-8);
	this->land(450);
}

void Skater::trick13()
{
	cout << "You attempt to boardslide." << endl;
	this->setStamina(-12);
	this->land(750);
}