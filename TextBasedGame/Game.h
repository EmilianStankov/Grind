#ifndef GAME_GUARD
#define GAME_GUARD

#include <iostream>
#include <string>
#include "Player.h"
#include "Skater.h"
#include "BMXer.h"
#include "ParkPiece.h"
#include "Rail.h"
#include "QuarterPipe.h"

class Game
{
private:
	std::string name;
	std::string command;
	ParkPiece* piece;
	Player* player;
public:
	void Run();
	Player* initializePlayer();
	ParkPiece* generatePiece();
	void checkCommand(ParkPiece* piece, std::string command, Player* player);
};

#endif