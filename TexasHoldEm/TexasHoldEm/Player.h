#pragma once

#include <vector>
#include <string>
#include "Bet.h"
#include "Card.h"

using namespace std;

class Player
{
public:
	Player();
	~Player();

	vector<Card> hand;
	string name;
	string getName(); 
	int bankroll;

	//CardTable*table

	vector<int> bestHand();
	int getBet();
	Bet placeTableBet(); 
	double betAmt; 
	//Chip chip;
	bool inOrOut;

	

};

