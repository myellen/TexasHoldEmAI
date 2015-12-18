#pragma once
#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
	vector<Card> myDeck;
public:
	Deck();
	~Deck();
	void shuffle();
	Card deal();
	int numberofCards()
	{
		return myDeck.size();
	}
	void insertCard(int position, Card card)
	{
		myDeck.insert(myDeck.begin() + position, card);
	}
	
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
};

