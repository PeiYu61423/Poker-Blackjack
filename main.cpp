#include <iostream>
#include "Poker.h"
using namespace std;

int main()
{
	Poker p;
    int game = 1;
    p.shuffle();
    while (game == 1 || game == 2 || game == 3 || game == 4)
    {
        cout << "1.�n�P 2.���n�P 3.�h�X  >>�п�J�Ʀr��ܾާ@:";
        cin >> game;
        if (game == 1) { 
            p.outs(); }
        else if (game == 2) {
            p.BBouts();
        }
        else      exit(0);
    }



