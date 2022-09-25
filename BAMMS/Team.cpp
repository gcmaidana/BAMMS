//----------------------------------- 
// Name:    Erik Leeser and Lucas DeMars
// Project: BAMSS
// Purpose: This class represents a team and is used to track the
// stats of a team and be used for the scoreboard.
//----------------------------------- 
#include "Team.h"


// increments fouls
int Team::incrementFoul()
{
   return ++fouls;
}

// decrements fouls
int Team::decrementFoul()
{
    if (fouls == 0)
        return fouls = 0;
    return --fouls;
}

// decrements timeouts
int Team::decrementTimeout()
{
    if (timeouts == 0)
        return timeouts = 0;
   return --timeouts;
}

// increments timeouts
int Team::incrementTimeout()
{
   return ++timeouts;
}

// resets timeouts
int Team::resetTimeouts()
{
    return timeouts = totTimeouts;
}

// resets fouls
int Team::resetFouls()
{
    return fouls = 0;
}

// increments assists
int Team::incrementAssists(int type)
{
    if (type == 1)
        return ++assists;
    else
    {
        if (assists > 0)
            return --assists;
        else
            return assists;
    }
}

// incremetns rebounds
int Team::incrementRebounds(int type)
{
    if (type == 1)
        return ++rebounds;
    else
    {
        if (rebounds > 0)
            return --rebounds;
        else
            return rebounds;
    }
}

// increments blocks
int Team::incrementBlocks(int type)
{
    if (type == 1)
        return ++blocks;
    else
    {
        if (blocks > 0)
            return --blocks;
        else
            return blocks;
    }
}

// increments steals
int Team::incrementSteals(int type)
{
    if (type == 1)
        return ++steals;
    else
    {
        if (steals > 0)
            return --steals;
        else
            return steals;
    }
}

// incremetns games played
int Team::incrementGamesPlayed()
{
   return gamesPlayed++;
}