#pragma once
#include<string>
using namespace std;
class Card
{
	int rank;
	char suit;
public:
	Card();
	~Card();
	string getRankAsStr();
	int getRank();
};

