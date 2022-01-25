#include <bits/stdc++.h>
using namespace std;
int main () {
    int m;
    cin >> m;
    while (m!=0) {
        int x,y;
        cin >> x >> y;
        if(y==0) {
            cout << "divisao impossivel" << endl;
        }
        else {
            float ans = x/float(y);
            cout << fixed << setprecision(1)<< ans << endl;
        }
        m--;
    }
    return 0;
}

