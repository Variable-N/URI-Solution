#include <bits/stdc++.h>
using namespace std;
int main () {
    float ara [12][12];
    int x,y,Line;
    float sum=0;
    char op;
    cin >> Line >> op;
    for (int i=0; i<12;i++) {
        for (int j=0; j<12;j++) {
            cin >> ara [i][j];
        }
    }

    for (int j=0; j<12;j++) {
            sum+= ara [Line][j];
    }
    if(op=='S') {
        cout << fixed << setprecision(1) <<sum  << endl;
    }
    else {
        cout << fixed << setprecision(1) <<(sum/12.0) << endl;
    }
    return 0;
}
