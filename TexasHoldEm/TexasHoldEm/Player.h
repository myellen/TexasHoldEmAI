#pragma once

#include <vector>
#include <string>
#include "Bet.h"

using namespace std;

class Player
{
public:
	Player();
	~Player();

	vector<int> hand;
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

