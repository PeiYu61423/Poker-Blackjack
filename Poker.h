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
	int getSumP();   //���a�I�ƥ[�`    
	int getSumB();   //���a�I�ƥ[�` 
	string getPokerP();  //���a�I��
	string getPokerB();  //���a�I��
	void outs();//���a�n�P  
	void Bouts();//���a�n�P
	void shuffle();//�~�P
	void BBouts();
};
#endif


