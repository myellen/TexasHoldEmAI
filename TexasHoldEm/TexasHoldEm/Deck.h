#pragma once
class Deck
{
public:
	Deck();
	void shuffle();
	void deal();
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

	~Deck();

};

