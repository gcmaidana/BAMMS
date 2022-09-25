//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class helps the game class and manages some of 
// the functionality of game
//----------------------------------- 
#include "GameManager.h"

// increment the score of a team
int GameManager::incrementScore(int team, int scoreType)
{
    if (team == 1)
    {
        return team1->incrementScore(scoreType);
    }
    else
    {
        return team2->incrementScore(scoreType);
    }
      

}



// decrements the score of a team
int GameManager::decrementScore(int team)
{
   if (team == 1)
      return team1->decrementScore();
   else
      return team2->decrementScore();

}





// decrements timeouts for a team
int GameManager::decrementTimeout(int team)
{
   if (team == 1)
      return team1->decrementTimeout();
   else
      return team2->decrementTimeout();
}

// increments timeouts for a team
int GameManager::incrementTimeout(int team)
{
   if (team == 1)
      return team1->incrementTimeout();
   else
      return team2->incrementTimeout();
}


// increments the fouls for a team
int GameManager::incrementFoul(int team)
{
   if (team == 1)
   {
      return team1->incrementFoul();
   }
   else
      return team2->incrementFoul();
}


// decrements the fouls for a team
int GameManager::decrementFoul(int team)
{
   if (team == 1)
      return team1->decrementFoul();
   else
      return team2->decrementFoul();
}

// resets timeouts for a team
int GameManager::resetTimeout(int team)
{
    if (team == 1)
        return team1->resetTimeouts();
    else
        return team2->resetTimeouts();
}

// resets fouls
int GameManager::resetFoul(int team)
{
    if (team == 1)
        return team1->resetFouls();
    else
        return team2->resetFouls();
}

// incremetns assists
int GameManager::incrementAssists(int team, int type)
{
   if (team == 1)
      return team1->incrementAssists(type);
   else
      return team2->incrementAssists(type);
}

// increments rebounds
int GameManager::incrementRebounds(int team, int type)
{
   if (team == 1)
      return team1->incrementRebounds(type);
   else
      return team2->incrementRebounds(type);
}

// increments blocks
int GameManager::incrementBlocks(int team, int type)
{
   if (team == 1)
      return team1->incrementBlocks(type);
   else
      return team2->incrementBlocks(type);
}

// increments steals
int GameManager::incrementSteals(int team, int type)
{
   if (team == 1)
      return team1->incrementSteals(type);
   else
      return team2->incrementSteals(type);
}