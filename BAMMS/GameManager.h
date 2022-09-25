#pragma once

#include "Team.h"
//#include "History.h"

class GameManager 
{
public:
   Team* team1; // team pointer for team 1
   Team* team2; // team pointer for team 2


   int incrementScore(int team, int scoreType);
   int decrementScore(int team);




   int decrementTimeout(int team);
   int incrementTimeout(int team);
   int resetTimeout(int team);


   int incrementFoul(int team);
   int decrementFoul(int team);
   int resetFoul(int team);

   int incrementAssists(int team, int type);
   int incrementRebounds(int team, int type);
   int incrementBlocks(int team, int type);
   int incrementSteals(int team, int type);


};