#pragma once
#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
	vector<Card> myDeck;
public:
	Deck();
	void shuffle();
	Card deal();
	//void revealHand();
	//void sortHand();
	//int rankHand();
	//char revealHandRank(int);

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

	~Deck();

};

