#include <bits/stdc++.h>
using namespace std;
int solve (int input) {
    int line=0,column=0,value;
    int ara [input][input];
    for(line = 0; line <input;line++) {
        for (column=0; column <input; column++) {
            if(column==input-(line+1)) {
                ara[line][column]=2;
            }
            else if (line==column) {
                ara[line][column]=1;
            }
            else {
                ara[line][column]=3;
            }
        }
    }

    for(int i=0; i<input; i++) {
        for(int j=0; j<input; j++) {
            cout << ara[i][j];
        }
        cout << endl;
    }
}
int main () {
    int N;

    while(cin >> N) {
        solve(N);
    }
    return 0;
}
