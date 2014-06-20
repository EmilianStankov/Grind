#include "Game.h"
#include "Text.h"
#include "ParkPiece.h"
#include "Rail.h"
#include "QuarterPipe.h"
#include "EnergyDrink.h"
#include <iostream>

using namespace std;

void Game::Run()
{
	int findEnergyDrinkChance;
	cout << header;
	this->player = initializePlayer();
	while (this->player[0].getLevel() < 5)
	{
		this->piece = generatePiece();
		if (this->piece[0].isGrindable())
			cout << grindable;

		cout << controls << endl;

		cin >> this->command;
		this->checkCommand(piece, command, player);

		findEnergyDrinkChance = rand() % 3;
		if (findEnergyDrinkChance == 2)
		{
			cout << this->player[0].getName() << energyDrinkFound;
			EnergyDrink* drink = new EnergyDrink();
			this->player[0].setStamina(drink[0].getStaminaPoints());
		}

		this->player[0].checkScore();
	}
	cout << "Congratulations, " << this->player[0].getName() << " you got a sponsorship!";
}

Player* Game::initializePlayer()
{
	Player* pl = new Player();
	while (true)
	{
		cin >> this->command;
		if (this->command == "start")
			cout << selectPlayer;
		else if (this->command == "help")
		{
			cout << help;
			while (this->command != "start")
			{
				cin >> this->command;
				break;
			}
			cout << selectPlayer;
		}
		cin >> this->command;
		cout << "Enter your name\n";

		cin.ignore();
		getline(cin, this->name);

		if (this->command == "1")
		{
			pl = new BMXer(name);
		}
		else if (this->command == "2")
		{
			pl = new Skater(name);
		}

		return pl;
	}
}

ParkPiece* Game::generatePiece()
{
	ParkPiece* piece;
	int type = rand() % 2;
	if (type == 0)
	{
		piece = new Rail();
		cout << "You see a rail in front of you. What do you do?" << endl;
	}
	else
	{
		piece = new QuarterPipe();
		cout << "You see a quarter pipe in front of you. What do you do?" << endl;
	}
	return piece;
}

void Game::checkCommand(ParkPiece* piece, string command, Player* player)
{
	while (command == "status")
	{
		player[0].printStatus();
		cin >> command;
	}
	if (piece[0].isGrindable())
	{
		if (command == "9")
			player[0].trick9();
		else if (command == "10")
			player[0].trick10();
		else if (command == "11")
			player[0].trick11();
		else if (command == "12")
			player[0].trick12();
		else if (command == "13")
			player[0].trick13();
	}
	if (command == "1")
		player[0].trick1();
	else if (command == "2")
		player[0].trick2();
	else if (command == "3")
		player[0].trick3();
	else if (command == "4")
		player[0].trick4();
	else if (command == "5")
		player[0].trick5();
	else if (command == "6")
		player[0].trick6();
	else if (command == "7")
		player[0].trick7();
	else if (command == "8")
		player[0].trick8();
}