#include <stdlib.h>
#include <time.h>
#include <string>
#include <iostream>
#include "Poker.h"
using namespace std;
Poker::Poker()
{
	int i = 0;
	poker[0] = 0;
	for (i = 1; i <= 13; i++)
	{
		poker[i] = i;
		poker[i + 13] = i;
		poker[i + 26] = i;
		poker[i + 39] = i;
	}
	//poker value
	for (i = 1; i <= 52; i++)
	{
		if (poker[i] < 10) pValue[i] = poker[i];
		else pValue[i] = 10;
	}
	//poker number
	static const string pokerNumber[13] =
	{ "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	pName[0] = "";
	for (i = 0; i < 4; i++)
	{
		pName[1 + 13 * i] = "A";
		pName[2 + 13 * i] = "2";
		pName[3 + 13 * i] = "3";
		pName[4 + 13 * i] = "4";
		pName[5 + 13 * i] = "5";
		pName[6 + 13 * i] = "6";
		pName[7 + 13 * i] = "7";
		pName[8 + 13 * i] = "8";
		pName[9 + 13 * i] = "9";
		pName[10 + 13 * i] = "10";
		pName[11 + 13 * i] = "J";
		pName[12 + 13 * i] = "Q";
		pName[13 + 13 * i] = "K";
	}

	for (i = 0; i < 5; i++)
	{
		pokerP[i] = 0;
		pokerB[i] = 0;
	}
	pokerPNum = 0;
	pokerBNum = 0;


}

void Poker::shuffle()
{
	int k, tem;
	srand(time(0));
	for (int i = 52; i > 0; i--)
	{
		k = rand() % 52;
		tem = poker[k];
		poker[k] = poker[i];
		poker[i] = tem;
	}
}


int Poker::getSumP(){
	int result = 0;

	for (int i = 0; i < pokerPNum; i++)
		result = result + pValue[pokerP[i]];

	return result;
};
int Poker::getSumB(){
	int result = 0;

	for (int i = 0; i < pokerBNum; i++)
		result = result + pValue[pokerB[i]];

	return result;
};         
string Poker::getPokerP() {
	int i;
	string result = "";

	for (i = 0; i < pokerPNum; i++)
		result = result + pName[pokerP[i]] + " ";

	return result;
};  
string Poker::getPokerB() {
	int i;
	string result = "";

	for (i = 0; i < pokerBNum; i++)
		result = result + pName[pokerB[i]] + " ";

	return result;
}; 

void Poker::outs(){
	if (pokerPNum >= 5)
	{
		cout << "你的牌數已夠5張，不能再要牌了" << endl;
		
	}
	else
	{
		pokerP[pokerPNum++] = rand()%52;  
		cout << "你的牌為:" << getPokerP() << endl;
		if (getSumP() > 21)
		{
			
				cout << "你已經輸了" << endl;
				cout << "遊戲結束" << endl;
				exit(0);
		}
		else if (getSumP() == 21)
		{
			cout << "玩家的牌為" << getPokerP() << endl;
			cout<<"你贏了 " << endl;
			exit(0);
		}
	}
}; 
void Poker::Bouts(){
	if (pokerBNum >= 5)
	{
		if (getSumP() > getSumB())
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "你贏了"  << endl;
			exit(0);

		}
		else if (getSumP() == getSumB())
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "平手" << endl;
			exit(0);
		}
		else if (getSumP() < getSumB())
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "你輸了" <<  endl;
				exit(0);
			
		}
	}
	else
	{
		pokerB[pokerBNum++] = rand() % 52; 
		if (getSumB() > 21)
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "莊家死了,你贏了"  << endl;
		}
		else    BBouts();
	}
};         
void Poker::BBouts() {
	if (getSumB() >= 17)
	{
		if (getSumB() > getSumP())
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "你輸了" << endl;
				exit(0);
		}
		else if (getSumP() == getSumB())
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "你輸了" << endl;
			exit(0);
		}
		else 
		{
			cout << "莊家的牌為" << getPokerB() << endl;
			cout << "你贏了"  << endl;
			exit(0);
		}
	}
	else
	{
		Bouts();
	}
};