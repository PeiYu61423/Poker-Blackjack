#include <iostream>
#include "Poker.h"
using namespace std;

int main()
{
    Poker p;
    int game = 1;
    p.shuffle();
    cout << "歡迎來到21點" << endl;
    while (game == 1 || game == 2)
    {
        cout << "1.要牌 2.不要牌 3.退出  >>請輸入數字選擇操作:";
        cin >> game;
        if (game == 1) {
            p.outs();
        }
        else if (game == 2) {
            p.BBouts();
        }
        else      exit(0);
    }
}



