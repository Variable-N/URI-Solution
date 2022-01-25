#include <bits/stdc++.h>
using namespace std;
int main () {
    int guess,p1,p2,cheat,accuse,sum;
    cin >> guess >> p1 >> p2 >> cheat >> accuse;
    bool p1Win=false;
    if ((p1+p2)%2==0) sum=1;
    else sum=0;
    if(guess==sum) p1Win=true;
    if(cheat==1 && accuse==cheat) p1Win = false;
    if (accuse!=cheat) p1Win= true;
    cout << ((p1Win)? "Jogador 1 ganha!" : "Jogador 2 ganha!")<<endl;
    return 0;
}
