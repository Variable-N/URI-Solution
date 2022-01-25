#include <bits/stdc++.h>
using namespace std;
int main () {
    double ara [12][12];
    double sum=0;
    int count =0;
    char op;
    cin >> op;
    for (int i=11; i>=0;i--) {
        for (int j=11; j>=0;j--) {
            cin >> ara [i][j];
        }
    }
    for(int j=1; j<11;j++) {
        for(int i=0; i<11; i++) {
            if (i<j && j<11-i) {
                sum+=ara[i][j];
                count++;
            }
        }
    }
    if(op=='S') {
        cout << fixed << setprecision(1) <<sum  << endl;
    }
    else {
        cout << fixed << setprecision(1) <<(sum/(double)count) << endl;
    }
    return 0;
}


