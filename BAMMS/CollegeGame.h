#pragma once
//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class inherits from Game and is used to play a 
// game with college rules.
//----------------------------------- 

#include "Team.h"
#include "Game.h"
#include <iostream>
using namespace std;

class CollegeGame : public Game
{
private:

   const int CollegeNumOfTimeouts = 4; // num of timeouts for a college game
   const int CollegeNumOfPeriods = 2; // num of periods in a college game
   const int CollegePeriodLength = 20; // 20 minutes, or 1,200 seconds
   const int CollegeShotclockLength = 30; // 30 seconds
   const int CollegeShotclockReset = 20; // num of shot clock reset off of rebound


public:
   // default constructor
   CollegeGame()
   {
      numOfPeriods = CollegeNumOfPeriods;
      periodLength = CollegePeriodLength;
      numOfTimeouts = CollegeNumOfTimeouts;
      shotclockLength = CollegeShotclockLength;

      period = 1;
      gameclock = periodLength;
      shotclock = shotclockLength;
      bonus = false;
      doubleBonus = false;

      team1 = new Team(numOfTimeouts);
      team2 = new Team(numOfTimeouts);
   }

   // method to reset the shot clock after a rebound or foul
   void CollegeResetShotclock()
   {
      shotclock = CollegeShotclockReset;
   }



};