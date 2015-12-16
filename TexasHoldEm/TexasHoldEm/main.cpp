#include <iostream>
#include "Pot.h"
#include "Player.h"
using namespace std;


void main()
{
	cout << "Hello World!" << endl;



	// Take bets
	Player player; 
	Pot money; 
	money.placeBet(player.getName(), player.getBet()); 
}