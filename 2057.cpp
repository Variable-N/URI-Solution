#include <bits/stdc++.h>
using namespace std;
int main () {
    int S,F,T,E;
    cin >> S >> F >> T;
    E=S+F+T;
    if(E<0) E+=24;
    else if (E>23) E-=24;
    cout << E << endl;
    return 0;
}
