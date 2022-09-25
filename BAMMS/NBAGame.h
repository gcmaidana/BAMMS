#pragma once
//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class inherits from game and is used to 
// score a game by NBA rules
//----------------------------------- 
#include "Team.h"
#include "Game.h"
#include <iostream>
using namespace std;

class NBAGame : public Game
{
private:
   const int NBANumOfTimeouts = 7; // number of NBA timeouts
   const int NBANumOfPeriods = 4; // number of NBA periods
   const int NBAPeriodLength = 12; // 12 minutes, or 720 seconds
   const int NBAShotclockLength = 24; // 24 seconds
   const int NBAShotclockReset = 14; // what the shot clock resets to after a rebound in the NBA



public:
   // default constructor
   NBAGame()
   {
      numOfPeriods = NBANumOfPeriods;
      periodLength = NBAPeriodLength;
      numOfTimeouts = NBANumOfTimeouts;
      shotclockLength = NBAShotclockLength;

      period = 1;
      gameclock = periodLength;
      shotclock = shotclockLength;
      bonus = false;
      doubleBonus = false;

      team1 = new Team(numOfTimeouts);
      team2 = new Team(numOfTimeouts);
   }

   // Method to reset the shot clock after a rebound
   void NBAResetShotclock()
   {
      shotclock = NBAShotclockReset;
   }

};