//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This class handles all the logic relating
// to either pushing or retrieving or updating the database
//----------------------------------- 

#include <string>
#include <iostream>
#include <vector>
using namespace std;
#pragma once
class DBManager
{

public:
	
	const int TEAMS_TABLE_COLUMNS = 10; // the teams table has 10 columns

   // Method definitions are in the CPP file.
   bool addUser(string username, string password);
   bool printUsers();
   string printID();
   bool checkIfUserExists(string username);
   bool attemptLogin(string username, string password);
   bool isUserPremiumUser(string username, string password);
   bool subscriberToPremium(string username, string password);
   bool setUserAsLoggedIn(string username, string password);
   bool setUserAsNOTLoggedIn(int userIDInput);
   string retrieverUserID();
   bool checkIfTeamAlreadyExists(string teamNameInput);
   bool createTeam(int userIDRef, string teamNameInput, int totalScoreInput, int totalFoulsInput, int totalAssistsInput,
				   int totalReboundsInput, int totalBlocksInput, int totalStealsInput, int totalGamesInput);
  vector<string> retrieveExistingTeamStats(string teamName);
  bool updateTeam(string teamNameInput, int totalScoreInput, int totalFoulsInput, int totalAssistsInput,
				   int totalReboundsInput, int totalBlocksInput, int totalStealsInput, int totalGamesInput);

 

};