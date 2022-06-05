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

	for (int i = 1; i <= 52; i++)
	{
		int j = i % 13;
		pName[i] = pokerNumber[j];
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

void Poker::print()
{
	for (int i = 1; i <= 52; i++)
	{
		cout << poker[i] << " ";
		if (i % 13 == 0) cout << endl;
	}
	cout << endl;
	for (int i = 1; i <= 52; i++)
	{
		cout << pName[i] << " ";
		if (i % 13 == 0) cout << endl;
	}
}