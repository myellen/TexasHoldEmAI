#include <string> 

using namespace std; 
#pragma once
class Bet
{
public:
	Bet(string playerName, double betAmt);
	string player;
	double bet;
	int getBetAmt();
	string getPlayerName(); 

};

