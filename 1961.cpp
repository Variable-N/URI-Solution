#include <bits/stdc++.h>
using namespace std;
int main () {
    int jump,pipe;
    cin >> jump >> pipe;
    int N [pipe];
    bool win=true;
    for (int i=0; i<pipe ; i++) {
        cin >> N[i];
    }
    for (int i=1; i<pipe ; i++) {
        int dif;
        dif=abs(N[i-1]-N[i]);
        if(dif>jump) {
            win=false;
            break;
        }
    }
    cout << ((win)? "YOU WIN" : "GAME OVER") << endl;
    return 0;
}
