#include "Player.h"
#include <string> 


Player::Player()
{
}


Player::~Player()
{
}

vector<int> Player::bestHand()
{
	return vector<int>();
}

/* 
int Player::getBet()
{
	return 0;
}

*/
Bet Player::placeTableBet()
{
	return Bet(name, betAmt);
}

string Player::getName()
{
	return name; 
}
