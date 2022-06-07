#include <iostream>
#include "Poker.h"
using namespace std;

int main()
{
    Poker p;
    int game = 1;
    cout << "-----歡迎來到21點-----" << endl;
    cout << "規則: " << "\n" << "電腦為莊家，玩家為閒家" << "\n" << "A為1點，J、Q、K皆為10點" << "\n\n";

    p.shuffle();
    while (game == 1 || game == 2 || game == 3 || game == 4)
    {
        cout << "請選擇 1.要牌 2.不要牌 3.退出  >>請輸入數字選擇操作:";
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