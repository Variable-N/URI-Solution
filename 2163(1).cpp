#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,m,X=0,Y=0;
    cin >> n >> m;
    int ara [n][m];
    for(int i=0; i<n;i++) {
        for(int j=0; j<m; j++) {
            cin>> ara[i][j];
        }
    }
    for(int i=1; i<n-1;i++) {
        for(int j=1; j<m-1; j++) {
            if(ara[i][j]==42) {
                if(ara[i-1][j-1]==7 && ara[i-1][j]==7 && ara[i-1][j+1]==7 && ara[i][j-1]==7 && ara[i][j+1]==7 && ara[i+1][j-1]==7 && ara[i+1][j]==7 && ara[i+1][j+1]==7) {
                    X=i+1;
                    Y=j+1;
                    break;
                }
            }
        }
    }
    cout << X << " " << Y << endl;
    return 0;
}
