#include <bits/stdc++.h>
using namespace std;

int main () {
    int N,M;
    while (cin>>N && cin >> M) {
        int board [N][M];
        short pokX,pokY,meX,meY;
        for (int i=0; i<N  ;i++ ) {
            for (int j=0; j<M ;j++ ) {
                cin >> board [i][j];
                if(board [i][j]==2) {
                    pokX=i,pokY=j;
                }
                else if (board[i][j]==1) {
                    meX=i,meY=j;
                }
            }
        }
        int counter=0;
        while (meX!=pokX || meY!=pokY) {
            if(meX<pokX) {
                meX++;
                counter++;
            }
            if(meX>pokX) {
                meX--;
                counter++;
            }
            if(meY<pokY) {
                meY++;
                counter++;
            }
            if(meY>pokY) {
                meY--;
                counter++;
            }
        }
        cout << counter << endl;
    }
}
