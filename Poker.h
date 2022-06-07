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

public:
	Poker();
	int getSumP(); //add player points
	int getSumB(); //add banker point
	string getPokerP(); //return player points
	string getPokerB(); //return banker points
	void outs(); //player asks for
	void Bouts(); //banker asks for
	void shuffle();
	void BBouts();
};
#endif

