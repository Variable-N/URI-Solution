#include <bits/stdc++.h>
using namespace std;
int main () {
    float ara [12][12];
    float sum=0;
    char op;
    cin >> op;
    for (int i=0; i<12;i++) {
        for (int j=0; j<12;j++) {
            cin >> ara [i][j];
        }
    }
    for (int i = 0; i <12;i++) {
        for(int j=11; j>11-i;j--) {
            sum+= ara [i][j];
        }
    }



    if(op=='S') {
        cout << fixed << setprecision(1) <<sum  << endl;
    }
    else {
        cout << fixed << setprecision(1) <<(sum/66.0) << endl;
    }
    return 0;
}

