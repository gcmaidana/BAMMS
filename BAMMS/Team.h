#pragma once
//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class represents a team and is used to track the
// stats of a team and be used for the scoreboard.
//----------------------------------- 
#include "MyStack.h"

class Team
{
private:
   int totTimeouts; // number of total timeouts
   int fouls; // number of fouls
   int timeouts; // number of timeouts
   bool possession; // possession boolean
   int score; // score for the team
   int assists; // assists for the team
   int rebounds; // rebounds fro the team
   int blocks; // blocks for the team
   int steals; // steals for the team
   int gamesPlayed; // gamesPlayed for the team
   MyStack* done, * undone; // stacks for undo and redo

public:

   // constructor
   Team(int numTimeouts)
   {
	   score = 0;
	   fouls = 0;
	   assists = 0;
	   blocks = 0;
	   steals = 0;
	   rebounds = 0;
	   totTimeouts = numTimeouts;
	   timeouts = numTimeouts;
	   done = new MyStack();
	   undone = new MyStack();
   }
   int getScore() { return score; } // getter fro score
   int getTimeouts() { return timeouts; } // getter for timeouts
   int getFouls() { return fouls; } // getter for fouls

   // method to clear a stack
   void clearStack() 
   {
	   while (!undone->isEmpty())
	   {
		   undone->Pop();
	   }
   }

   // method to increment the score of the team
   int incrementScore(int sT) 
   {
	   score += sT;
	   clearStack();
	   done->Push(sT);
	   return score;
   }

   // method to decrement score
   int decrementScore()
   {
	   if (done->Size() == 0)
		   return score;
	   int temp = done->Pop();
	   score -= temp;
	   undone->Push(temp);
	   return score;
   }

   // method to redo
   int redo()
   {
	   if (undone->Size() == 0)
		   return score;
	   int temp = undone->Pop();
	   score += temp;
	   done->Push(temp);
	   return score;
   }
   int incrementFoul();
   int decrementFoul();
   int decrementTimeout();
   int incrementTimeout();
   int resetTimeouts();
   int resetFouls();

   int getAssists() { return assists; } // getter for assists
   int getRebounds() { return rebounds; } // getter for rebounds
   int getBlocks() { return blocks; } // getter for blocks
   int getSteals() { return steals; } // getter for steals
   int getGamesPlayed() { return gamesPlayed; } // getter fro games played

   int incrementAssists(int type);
   int incrementRebounds(int type);
   int incrementBlocks(int type);
   int incrementSteals(int type);
   int incrementGamesPlayed();

};
