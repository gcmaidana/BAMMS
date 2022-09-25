#pragma once

#include "GameManager.h"

class ClockManager : public GameManager
{
public:
   int shotclockLength = 24; // shotclock length
   int shotclockResetNBA = 14; // shot clock length of NBA after rebound
   int shotclockResetCollege = 20; // shot clock length of College after rebound
   int shotclock = 0; // int for the shotclock
   int gameclock = 0; // int for the game clock
   int periodLength = 0; // int for the period length



   int decrementShotclock(); 
   int decrementGameclock();

   void resetShotclock();
   void offRebShotClkResetNBA();
   void offRebShotClkResetCollege();
   void resetGameclock();

   int GetShotclock() { return shotclock; } // getter for shotclock
   int GetGameclock() { return gameclock; } // getter for gameclock

   int GetShotclockLength() { return shotclockLength; } // getter for shotclock length
   int GetPeriodLength() { return periodLength; } // getter for period length
};