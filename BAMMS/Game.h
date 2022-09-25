#pragma once


#include "Team.h"
#include "ClockManager.h"
#include "GameManager.h"
#include <iostream>
using namespace std;

class Game : public ClockManager
{
private:
	bool possession; // boolean expressing possession

public:
   int numOfPeriods = 0; // number of periods
   int numOfTimeouts = 0; // number of timeouts
   int period = 0; // the current period

   bool bonus = false; // boolean for bonus
   bool doubleBonus = false; // boolean for double bonus

   ~Game(); // destructor

   int incrementPeriod();
   int GetNumOfPeriods() { return numOfPeriods; } // getter for number of periods
   int GetNumOfTimeouts() { return numOfTimeouts; } // getter for the number of timeouts
   int GetShotclock() { return shotclock; } // getter for the shotclock

   bool GetPosession() { return possession; }; // getter for possession
   void SetPossession(bool newPos) { possession = newPos; } // setter for possession
   bool GetBonus() { return bonus; } // getter for bonus
   bool GetDoubleBonus() { return doubleBonus; } // getter for double bonus
   int GetPeriod() { return period; } // getter for period

   

};
