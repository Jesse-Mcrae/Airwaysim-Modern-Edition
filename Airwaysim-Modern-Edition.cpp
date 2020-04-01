#include "account.h"
#include "play.h"
using namespace std;
int main()
{
    unsigned long long year=2020, money=100000000;
    system("mode con cols=180 lines=51");
    system("color f0");
    for (int i = 0; i < 25; i++) cout << endl;
    for (int i = 0; i < 54; i++) cout << " ";
    cout << "A  i  r  w  a  y  s  i  m      M  o  d  e  r  n      E  d  i  t  i  o  n";
    Sleep(3500);
    if (!load_game())
    {
        new_account();
        normal_play(2020, 100000000);
    }
    return 0;
}
