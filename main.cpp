#include <iostream>
#include "Poker.h"
using namespace std;

int main()
{
    Poker p;
    int game = 1;
    cout << "-----�w��Ө�21�I-----" << endl;
    cout << "�W�h: " << "\n" << "�q�������a�A���a�����a" << "\n" << "A��1�I�AJ�BQ�BK�Ҭ�10�I" << "\n\n";

    p.shuffle();
    while (game == 1 || game == 2 || game == 3 || game == 4)
    {
        cout << "�п�� 1.�n�P 2.���n�P 3.�h�X  >>�п�J�Ʀr��ܾާ@:";
        cin >> game;
        if (game == 1) {
            p.outs();
        }
        else if (game == 2) {
            p.BBouts();
        }
        else      exit(0);
    }

    return 0;

}