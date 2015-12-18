#pragma once

#include <iostream>
#include <vector>

#include "Player.h"
#include "Pot.h"
#include "Deck.h"
#include "Card.h"

class CardTable
{
public:
	CardTable();
	~CardTable();

	vector<Player> players;
	vector<Card> commonHand;
	vector<Pot> pots;

	void takeBets();
	void run();
};

