#include "Bet.h"

using namespace std; 

Bet::Bet(string playerName, double betAmt)
{
	bet = betAmt;
	player = playerName;
}

int Bet::getBetAmt()
{
	return bet; 
}

string Bet::getPlayerName()
{
	return player; 
}
