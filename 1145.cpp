#include <bits/stdc++.h>
using namespace std;
int main () {
    int X,Y,z,a,b=0;
    cin >> X >> Y;
    for (a=1; a<=Y; a++) {
        b++;
        if(b==X) {
            cout << a;
        }
        else {
            cout << a << " ";
        }
        if(b==X) {
            b=0;
            cout << endl;
        }
    }

    return 0;
}

