#pragma once
#include "Card.h"

class Deck
{
public:
	Deck();
	~Deck();
	void shuffle();
	Card deal();
	void revealHand();
	void sortHand();
	int rankHand();
	char revealHandRank(int);

private:
	bool highCard();
	bool onePair();
	bool twoPair();
	bool threeOfKind();
	bool straight();
	bool flush();
	bool fullHouse();
	bool fourOfKind();
	bool straightFlush();
};

