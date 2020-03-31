#include "account.h"
using namespace std;
int main()
{
    system("mode con cols=180 lines=51");
    system("color f0");
    for (int i = 0; i < 25; i++) cout << endl;
    for (int i = 0; i < 54; i++) cout << " ";
    cout << "A  i  r  w  a  y  s  i  m      M  o  d  e  r  n      E  d  i  t  i  o  n";
    Sleep(3500);
    load_game();
    return 0;
}
