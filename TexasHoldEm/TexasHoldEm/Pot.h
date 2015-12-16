#include <string>

using namespace std; 

#ifndef Pot_h
#define Pot_h 
class Pot
{
public:
	Pot();
	string player; 
	double bet; 
	void placeBet(string playerName, double betAmt);
private: 

};

#endif //Pot_h
