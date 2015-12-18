#pragma once
#include<string>

//static const char[] suits = { '\u2560', };

using namespace std;
class Card
{
	int rank;
	char suit;
public:
	Card(int rank,char suit);
	~Card();
	string getRankAsStr();
	int getRank();
};

