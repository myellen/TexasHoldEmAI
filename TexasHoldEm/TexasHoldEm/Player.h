#pragma once

#include <vector>
#include <string>

using namespace std;

class Player
{
public:
	Player();
	~Player();

	vector<int> hand;
	string name;
	int bankroll;

	//CardTable*table

	vector<int> bestHand();
	int getBet();
	//Chip chip;
	bool inOrOut;
};

