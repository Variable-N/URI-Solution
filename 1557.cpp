#include <bits/stdc++.h>
using namespace std;
int solve (int input) {
    int line=0,column=0,value=1;
    long int ara [input][input];
    for(line = 0; line <input;line++) {
        for (column=0; column <input; column++) {
            ara[line][column]=value;
            value=value*2;
        }
        value=pow(2,(line+1));
    }
    int Max=ara[input-1][input-1],T=1;
    while(Max!=0) {
        Max/=10;
        T++;
    }
    for(int i=0; i<input; i++) {
        for(int j=0; j<input; j++) {
            int space=0, V=ara[i][j];
            while(V!=0) {
            V/=10;
            space++;
            }
            for(int k=1; k<T-space; k++) cout << " ";
            cout << ara[i][j];
            cout <<((j==input-1)? "":" ");
        }
        cout << endl;
    }
}
int main () {
    int N;
    cin>>N;
    while(N!=0) {
        solve(N);
        cout << endl;
        cin>> N;
    }
    return 0;
}

