#include "Card.h"



Card::Card(int rank,char suit)
{
	this->rank = rank;
	this->suit = suit;
}


Card::~Card()
{
}

string Card::getRankAsStr()
{
	return " ";
}

int Card::getRank()
{

	return rank;
}