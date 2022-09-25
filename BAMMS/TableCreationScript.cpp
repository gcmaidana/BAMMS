//----------------------------------- 
// Name:    Sean Maidana Dollanarte
// Project: BAMSS
// Purpose: This document is in the resources folder for a reason.
// This file is essentially a tutorial on what to paste in the MySQL Command Line Client
// to create the tables necessary for this program.
//----------------------------------- 



/*
This is here in case anyone in the group needs to create the MySQL Database table on their computer.
 Step 1. Open MySQL Command Line Client
 Step 2. Create the database by pasting the following into the command line:

 ----------------------------------- COPY EVERYTHING BELOW -----------------------------------------
	CREATE DATABASE BAMMSDB;
	USE BAMMSDB;

	DROP TABLE IF EXISTS players;
	DROP TABLE IF EXISTS teams;
	DROP TABLE IF EXISTS users;


	CREATE TABLE users (
	userID INT PRIMARY KEY AUTO_INCREMENT,
	username varchar(32) NOT NULL UNIQUE,
	password varchar(32) NOT NULL,
	paidUser boolean, 
	loggedIn boolean);

	INSERT INTO users (username, password, paidUser, loggedIn) VALUES ("testusername1", "password1", false, false);
	INSERT INTO users (username, password, paidUser, loggedIn) VALUES ("testusername2", "password2", false, false);
	INSERT INTO users (username, password, paidUser, loggedIn) VALUES ("testusername3", "password3", false, false);
	SELECT * FROM users;

	CREATE TABLE teams (
	teamID INT PRIMARY KEY AUTO_INCREMENT,
	userIDReference INT NOT NULL,
	teamName varchar(32) NOT NULL UNIQUE,
	totalScore INT,
	totalFouls INT,
	totalAssists INT,
	totalRebounds INT,
	totalBlocks INT,
	totalSteals INT,
	totalGames INT,
	FOREIGN KEY (userIDReference) REFERENCES users(userID)
	);

	INSERT INTO teams (userIDReference, teamName, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames) 
		VALUES (1, "Milwaukee Bucks", 140, 12, 4, 24, 35, 9, 1);
	INSERT INTO teams (userIDReference, teamName, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames) 
		VALUES (1, "LA Lakers", 140, 12, 4, 24, 35, 9, 1);
	INSERT INTO teams (userIDReference, teamName, totalScore, totalFouls, totalAssists, totalRebounds, totalBlocks, totalSteals, totalGames) 
		VALUES (2, "Philadelphia 76ers", 140, 12, 4, 24, 35, 9, 1);
	SELECT * FROM users;
	SELECT * FROM teams;


	CREATE TABLE players (
	playerID INT PRIMARY KEY AUTO_INCREMENT,
	playerName varchar(32) NOT NULL UNIQUE,
	teamIDReference INT NOT NULL,
	FOREIGN KEY (teamIDReference) REFERENCES teams(teamID)
	);

	INSERT INTO players (teamIDReference, playerName) VALUES (1, "Giannis Antetokounmpo");
	INSERT INTO players (teamIDReference, playerName) VALUES (1, "Grayson Allen");
	INSERT INTO players (teamIDReference, playerName) VALUES (2, "Carmelo Anthony");
	INSERT INTO players (teamIDReference, playerName) VALUES (2, "LeBron James");
	INSERT INTO players (teamIDReference, playerName) VALUES (3, "Joel Embiid");
	INSERT INTO players (teamIDReference, playerName) VALUES (3, "James Harde");

	SELECT * FROM users;
	SELECT * FROM teams;
	SELECT * FROM players;



	 ----------------------------------- COPY EVERYTHING ABOVE -----------------------------------------
*/
