#include "Pot.h"
#include <string> 

Pot::Pot()
{

}

void Pot::placeBet(string playerName, double betAmt)
{
	bet = betAmt;
	player = playerName; 
}