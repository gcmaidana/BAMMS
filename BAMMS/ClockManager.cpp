#include "ClockManager.h"
//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class manages the shot and game clock for the game class.
//----------------------------------- 


// decrements shotclock 
int ClockManager::decrementShotclock()
{

   return --shotclock;
}

// decrements gameclock
int ClockManager::decrementGameclock()
{

   return --gameclock;
}

// resets the shot clock
void ClockManager::resetShotclock()
{
   shotclock = shotclockLength;
}

// resets the shot clock off of a rebound for NBA rules
void ClockManager::offRebShotClkResetNBA()
{
	shotclock = shotclockResetNBA;
}

// resets the shot clock off of a rebound for College rules
void ClockManager::offRebShotClkResetCollege()
{
	shotclock = shotclockResetCollege;
}


// resets the game clock
void ClockManager::resetGameclock()
{
   gameclock = periodLength;
}