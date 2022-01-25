#include <bits/stdc++.h>
using namespace std;
int main () {
    float ara [12][12];
    int count = 0;
    float sum=0;
    char op;
    cin >> op;
    for (int i=0; i<12;i++) {
        for (int j=0; j<12;j++) {
            cin >> ara [i][j];
            if (i>j && i+j<11) {
                sum+=ara [i] [j];
                count ++;
            }
        }
    }


    if(op=='S') {
        cout << fixed << setprecision(1) <<sum  << endl;
    }
    else {
        cout << fixed << setprecision(1) <<(sum/double(count)) << endl;
    }
    return 0;
}


