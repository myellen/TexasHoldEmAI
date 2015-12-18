#include "Deck.h"
#include <iostream>

//static const vector<wchar_t> suits = { '?', '?', '?', '?' };
static const vector<char> suits = { 'S', 'H', 'D', 'C' };

Deck::Deck()
{
	//cout << "making new deck" << endl;
	//cout << "\u0444" << endl;
	for (int i = 2;i <= 14;i++)
	{
		for (int j = 0; j < suits.size(); j++)
		{
			Card temp(i, suits[j]);
			myDeck.push_back(temp);
		}
	}
}

Card Deck::deal()
{
	Card temp = myDeck[0];
	myDeck.erase(myDeck.begin());
	return temp;
}

void Deck::shuffle()
{
	int remainingShuffleCards = myDeck.size();
	int randomIndex;
	while (remainingShuffleCards > 0)
	{
		randomIndex = rand() % remainingShuffleCards;
		Card temp = myDeck[randomIndex];
		myDeck.erase(myDeck.begin() + randomIndex);
		myDeck.push_back(temp);
		remainingShuffleCards--;
	}
}
Deck::~Deck()
{
}
