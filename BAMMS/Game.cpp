//----------------------------------- 
// Name:    Erik Leeser
// Project: BAMSS
// Purpose: This game class is what is used by the scoreboard to 
// help score a game. 
//----------------------------------- 
#include "Game.h"

// destructor
Game::~Game()
{
   shotclockLength = 0;
   numOfPeriods = 0;
   periodLength = 0;
   numOfTimeouts = 0;
   shotclock = 0;
   gameclock = 0;
   period = 0;

   bonus = false;
   doubleBonus = false;
}

// increments period
int Game::incrementPeriod()
{
   return ++period;
}
