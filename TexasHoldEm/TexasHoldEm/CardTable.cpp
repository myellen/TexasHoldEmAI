#include "CardTable.h"



CardTable::CardTable()
{
}


CardTable::~CardTable()
{
}

void CardTable::takeBets()
{
	for (vector<Player>::iterator playerIter = players.begin(); playerIter != players.end(); ++playerIter)
	{
		int betAmount = playerIter->getBet();
		//pots.at(0).addBet(betAmountt);
	}
}

void CardTable::run()
{
	cout << "Enter player name to begin: " << endl;
	string name;
	cin >> name;
	Player humanPlayer;
	humanPlayer.name = name;
	players.push_back(humanPlayer);

	int numComputerPlayers;
	cout << "How manyu computer players would you like to play against?" << endl;
	cin >> numComputerPlayers;

	for (int i = 0; i < numComputerPlayers; ++i)
	{
		Player aiPlayer;
		aiPlayer.name = "Computer " + i;
		players.push_back(aiPlayer);
	}

	int startingBankroll;
	cout << "How much money would you like to start with?" << endl;
	cin >> startingBankroll;

	// main game loop
	while (true)
	{
		Deck deck;
		deck.shuffle();

		Pot mainPot;
		pots.push_back(mainPot);

		// deal inital hand
		for (int i = 0; i < 2; ++i)
		{
			for (vector<Player>::iterator playerIter = players.begin(); playerIter != players.end(); ++playerIter)
			{
				playerIter->hand.push_back(deck.deal());
			}
		}

		takeBets();

		// flop
		
		deck.deal(); // burn card
		for (int i = 0; i < 3; ++i)
			commonHand.push_back(deck.deal());
		takeBets();

		//turn
		deck.deal(); // burn card
		commonHand.push_back(deck.deal());
		takeBets();

		// river
		deck.deal(); // burn card
		commonHand.push_back(deck.deal());
		takeBets();

		// reveal hands

		// determine winner

		// payout pots
	} // main game loop
}
