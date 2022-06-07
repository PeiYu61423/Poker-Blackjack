#ifndef POKER_H
#define POKER_H
#include <string>
using namespace std;
class Poker
{
private:
	int poker[52];
	int pValue[52];
	string pName[52];
	int pokerP[5]; //player value
	int pokerB[5]; //banker value
	int pokerPNum; //player card number
	int pokerBNum; //banker card number
	static const string pokerNumber[13];
public:
	Poker();
	int getSumP();
	int getSumB();
	string getPokerP();
	string getPokerB();
	void outs();
	void Bouts();
	void shuffle();
	void BBouts();
};
#endif
