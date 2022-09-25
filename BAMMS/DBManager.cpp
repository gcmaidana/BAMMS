//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This class handles all the logic relating
// to either pushing or retrieving or updating the database
//----------------------------------- 

#include "DBManager.h"
#include <mysql.h>

// This method inserts a user into the database given their username and password
// This method is used for when a user registers for an account
bool DBManager::addUser(string usernameInput, string passwordInput)
{
	string username = usernameInput;
	string password = passwordInput;

	
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);

	// Our created Database is called BAMMSDB, and our password for the MySQL server is simply "password", with root as the username
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		string query = "INSERT INTO users (username, password, paidUser, loggedIn) VALUES ('" + username + "', '" + password + "', false, false);";
		const char* q = query.c_str();
		int qstate = mysql_query(conn, q);
		if (!qstate) // !qstate means the query is successful
		{
			cout << "User '" << username << "' successfully registered!" << endl;
			cout << endl;
			return true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}
	}
}

// This method prints a list of the users in the database.
// This is printed to the console, so this will not distract the user.
bool DBManager::printUsers()
{

	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 
	if (conn)
	{
		string query = "SELECT * FROM users";
		const char* q = query.c_str();
		int qstate = mysql_query(conn, q);
		if (!qstate)
		{
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				printf("userID: %s, username: %s, password: %s, Premium: %s, LoggedIn: %s\n", row[0], row[1], row[2], row[3], row[4]);
			}
			return true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}
	}
}

// This method returns the ID of the user that is logged in.
// This is useful for when we need to create the team in the database because since user and teams tables 
// are linked, we need to pass the userID reference.
// Even though we are SELECTING all attributes of the users table, this method
// is called in the retrieveID method, so it is only relevant and helpful for retrieving the ID.
string DBManager::printID()
{
	string userID;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 
	if (conn)
	{
		string query = "SELECT * FROM users";
		const char* q = query.c_str();
		int qstate = mysql_query(conn, q);
		if (!qstate)
		{
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				 userID = row[0];
			}
			return userID;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
		}
	}
}

// This will check to see if the username exists in the Database
bool DBManager::checkIfUserExists(string usernameInput)
{
	char resultant;
	int qstate;
	string username = usernameInput;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		string query = "SELECT EXISTS(SELECT 1 FROM bammsdb.users where username = '" + username + "')";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{

			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				resultant = *row[0]; // the SQL statement returns 1 if the user is found, 0 if not based on login username input
			}

			if (resultant == '1')
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
			cout << "Query failed: " << mysql_error(conn) << endl;

	}

}

// This will attempt to login the user with the username and password they provide
// This is done second to checking if the username exists through the use of the method, checkIfUserExists(string usernameInput)
bool DBManager::attemptLogin(string usernameInput, string passwordInput)
{
	char resultant;
	int qstate;
	string username = usernameInput;
	string password = passwordInput;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		string query = "SELECT EXISTS(SELECT 1 FROM bammsdb.users where username = '" + username + "' AND password = '" + password + "')";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{

			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				resultant = *row[0]; // the SQL statement returns 1 if the user is found, 0 if not based on login username input
			}

			if (resultant == '1')
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		cout << "Query failed: " << mysql_error(conn) << endl;

	}
}

// This method will return true if the user is premium, false if the user is not premium
bool DBManager::isUserPremiumUser(string usernameInput, string passwordInput)
{
	char resultant;
	int qstate;
	string username = usernameInput;
	string password = passwordInput;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); // change what DB you use if you name it something else


	if (conn)
	{
		
		string query = "SELECT EXISTS(SELECT 1 FROM bammsdb.users where username = '" + username + "' AND password = '" + password + "' AND paidUser = 1)";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{

			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				resultant = *row[0]; // the SQL statement returns 1 if the user is found, 0 if not based on login username input
			}

			if (resultant == '1')
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		cout << "Query failed: " << mysql_error(conn) << endl;

	}

}

// This method will change the users record for the particular username and change the paidUser boolean to true to mark that a user is a premium user
bool DBManager::subscriberToPremium(string usernameInput, string passwordInput)
{
	string username = usernameInput;
	string password = passwordInput;

	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		

		puts("Attempting to upgrade to premium. . .");

		string query = "UPDATE users SET paidUser = 1 WHERE username = '" + username + "' AND password = '" + password + "';";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			cout << "User '" << username << "' successfully upgraded to premium!" << endl;
			printResults = true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}

		if (printResults)
		{
			// Feel free to uncomment the line below if you wish to see the list of users printed out.
			// This will remain commented out, however, for security purposes, so that the usernames and passwords are not exposed in the console.
			//	printUsers(); // Just to verify that the record was properly updated, at the end of this method, users and their data will be printed
			return true;
		}
	}

	else
	{
		puts("Connection to database has failed!");
	}

}

// This method marks a user as logged in
// This is useful for when we want to retrieve the user because they will be the only person in the database that has the
// loggedIn boolean set to true since only one person can log in at a time on a particular computer.
bool DBManager::setUserAsLoggedIn(string usernameInput, string passwordInput)
{
	string username = usernameInput;
	string password = passwordInput;

	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		puts("Attempting to login user. . .");

		string query = "UPDATE users SET loggedIn = 1 WHERE username = '" + username + "' AND password = '" + password + "';";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			cout << "Welcome " << username << "!" << endl;
			cout << endl;
			printResults = true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}

		if (printResults)
		{
			// Feel free to uncomment the line below if you wish to see the list of users printed out.
			// This will remain commented out, however, for security purposes, so that the usernames and passwords are not exposed in the console.
			//	printUsers(); // Just to verify that the record was properly updated, at the end of this method, users and their data will be printed

			return true;
		}
	}

	else
	{
		puts("Connection to database has failed!");
	}

}

// This marks the user as not logged in. This method would be used after a user logs out.
bool DBManager::setUserAsNOTLoggedIn(int userIDInput)
{
	int userID = userIDInput;

	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		puts("Attempting to log out user. . .");

		string query = "UPDATE users SET loggedIn = 0 WHERE userID = " + to_string(userID) + ";";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			cout << "User logged out successfully!" << endl;
			printResults = true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}

		if (printResults)
		{
			// Feel free to uncomment the line below if you wish to see the list of users printed out.
			// This will remain commented out, however, for security purposes, so that the usernames and passwords are not exposed in the console.
			//	printUsers(); // Just to verify that the record was properly updated, at the end of this method, users and their data will be printed
		}
	}

	else
	{
		puts("Connection to database has failed!");
	}

}

// This method returns the userID of the user that is currently logged in.
string DBManager::retrieverUserID()
{

	string userID;
	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		
		puts("Retrieving User ID of Logged in User. . . ");

		string query = "SELECT userID FROM users WHERE loggedIn = 1;";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			userID = printID();
			return userID;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
		}

		
	}

	else
	{
		puts("Connection to database has failed!");
	}

}

// This method will return true if the team name exists in the database
// NOTE: All team names are unique, so there won't be duplicates.
bool DBManager::checkIfTeamAlreadyExists(string teamNameInput)
{
	char resultant;
	int qstate;
	string teamName = teamNameInput;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0);


	if (conn)
	{
		puts("Checking if team exists . . . ");
	
		string query = "SELECT EXISTS(SELECT * FROM teams WHERE teamName = '" + teamName + "');";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{

			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res))
			{
				resultant = *row[0]; // the SQL statement returns 1 if the team is found, 0 if not based on login username input	
			}

			if (resultant == '1')
			{
				cout << "Team " << teamName << " found!" << endl;

				return true;
			}
			else
			{
				cout << "Sorry, team " << teamName << " does not exist." << endl;
				return false;
			}
		}
	}
	else
	{
		cout << "Query failed: " << mysql_error(conn) << endl;

	}

}

// This method creates the team in the Database, this is useful for when the team does not already exist, otherwise if the team
// does exist, we will call a different method to update the team stats.
bool DBManager::createTeam(int userIDRef, string teamNameInput, int totalScoreInput, int totalFoulsInput, int totalAssistsInput, int totalReboundsInput, int totalBlocksInput, int totalStealsInput, int totalGamesInput)
{
	int userID = userIDRef;
	string teamName = teamNameInput;
	int totalScore = totalScoreInput;
	int totalFouls = totalFoulsInput;
	int totalAssists = totalAssistsInput;
	int totalRebounds = totalReboundsInput;
	int totalBlocks = totalBlocksInput;
	int totalSteals = totalStealsInput;
	int totalGames = totalGamesInput;


	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		puts("Succesfully connected to database!");
		
	
		string query = "INSERT INTO teams (userIDReference, teamName, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames) VALUES (" + to_string(userID) + ", '" 
			+ teamName + "', " + to_string(totalScore) + ", " + to_string(totalFouls) + ", " + to_string(totalAssists) + ", "+ to_string(totalRebounds) + ", " + to_string(totalBlocks) + ", "
			+ to_string(totalSteals) + ", " + to_string(totalGames) + ");";

		const char* q = query.c_str();
		int qstate = mysql_query(conn, q);
		if (!qstate)
		{
			cout << "Team insertion successful!" << endl;
			return true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}
	}

}

// This method returns a vector with all the stats of a team.
// Since team names are unique, this will always return only one team's stats.
vector<string> DBManager::retrieveExistingTeamStats(string teamNameInput)

{
	vector<string> teamStats;
	string teamName = teamNameInput;
	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
	
		cout << "Retrieving team stats. . ." << endl;

		string query = "SELECT * FROM teams WHERE teamName = '" + teamName + "';";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			res = mysql_store_result(conn);
			int i = 0;
			while (row = mysql_fetch_row(res))
			{
				
				for (int i = 0; i < TEAMS_TABLE_COLUMNS; i++)
				{
					teamStats.push_back(row[i]);
				}
				cout << "These are the values that are being returned as a vector for team " << teamName << ":" << endl;


				cout << "teamID: " << teamStats.at(0) << endl;
				cout << "userIDReference: " << teamStats.at(1) << endl;
				cout << "teamName: " << teamStats.at(2) << endl;
				cout << "totalScore: " << teamStats.at(3) << endl;
				cout << "totalFouls: " << teamStats.at(4) << endl;
				cout << "totalAssists: " << teamStats.at(5) << endl;
				cout << "totalRebounds: " << teamStats.at(6) << endl;
				cout << "totalBlocks: " << teamStats.at(7) << endl;
				cout << "totalSteals: " << teamStats.at(8) << endl;
				cout << "totalGames: " << teamStats.at(9) << endl;
			}
			cout << "Array succesfully retrieved!" << endl;
			return teamStats;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
		}
	}

	else
	{
		puts("Connection to database has failed!");
	}
}
// This method will update the statistics of a particular team with the values passed in the parameters, it will use
// the teamNameInput to locate what team these updated statistics should be applied to
bool DBManager::updateTeam(string teamNameInput, int totalScoreInput, int totalFoulsInput, int totalAssistsInput,
	int totalReboundsInput, int totalBlocksInput, int totalStealsInput, int totalGamesInput)
{
	string teamName = teamNameInput;
	int totalScore = totalScoreInput;
	int totalFouls = totalFoulsInput;
	int totalAssists = totalAssistsInput;
	int totalRebounds = totalReboundsInput;
	int totalBlocks = totalBlocksInput;
	int totalSteals = totalStealsInput;
	int totalGames = totalGamesInput;

	int qstate;
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	char resultant;
	bool printResults = false;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "password", "BAMMSDB", 3306, NULL, 0); 

	if (conn)
	{
		
		puts("Updating team stats. . .");
		string query = "UPDATE teams SET totalScore = " + 
					    to_string(totalScore) + ", totalFouls = " + to_string(totalFouls) + ", totalAssists = " + to_string(totalAssists) + ", totalRebounds = " + to_string(totalRebounds) 
						+ ", totalBlocks = " + to_string(totalBlocks) + ", totalSteals = " + to_string(totalSteals) + ", totalGames = " + to_string(totalGames) +
			           " WHERE teamName = '" + teamName + "';";

		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate)
		{
			return true;
		}
		else
		{
			cout << "Query failed: " << mysql_error(conn) << endl;
			return false;
		}

	}

	else
	{
		puts("Connection to database has failed!");
	}
}
