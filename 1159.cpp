#include <bits/stdc++.h>
using namespace std;
int main () {
    int X;
    cin >> X;
    while (X!=0) {
            int sum=0;
        if(X%2!=0) {
            X++;
        }
        for (int i=1; i<=5  ;i++ ) {
            sum+=X;
            X+=2;
        }
        cout << sum << endl;
        cin >> X;
    }
    return 0;
}

