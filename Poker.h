#ifndef POKER_H
#define POKER_H
#include <string>
using namespace std;
class Poker
{
private:
	int poker[53];
	int pValue[53];
	string pName[53];
	int pokerP[5]; //player value
	int pokerB[5]; //banker value
	int pokerPNum; //player card number
	int pokerBNum; //banker card number
	static const string pokerNumber[13];
public:
	Poker();
	int getSumP();   //玩家點數加總    
	int getSumB();   //莊家點數加總 
	string getPokerP();  //玩家點數
	string getPokerB();  //莊家點數
	void outs();//玩家要牌  
	void Bouts();//莊家要牌
	void shuffle();//洗牌
	void BBouts();
};
#endif


