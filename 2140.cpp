#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b;
    int bill [] = {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    cin >> a >> b;
    while ( a!=0 || b!=0) {
        bool possible=false;
        for (int i=0;i<15;i++ ){
            if((b-a)==bill[i]) {
                possible= true;
                break;
            }
        }
        cout << ((possible)? "possible":"impossible") << endl;
        cin >> a >> b;
    }
}
