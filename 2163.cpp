#include <bits/stdc++.h>
using namespace std;
int main () {
    int M,N,ansX=0,ansY=0;
    cin >> M >> N;
    int ara [M][N],xpos[M],ypos[N];
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cin >> ara [i][j];
        }
    }
    int pos=0;
    for (int i=1; i<M-1; i++) {
        for (int j=1; j<N-1; j++) {
            if(ara[i][j]==42) {
                xpos[pos]=i;
                ypos[pos]=j;
                pos++;
            }
        }
    }
    pos--;
    int o=0;
    bool con;
    while(o<=pos) {
        for(int i = xpos[o]-1; i<=xpos[o]+1; i++) {
            for (int j=ypos[o]-1; j<=ypos[o]+1; j++) {
                if(i==xpos[o] && j==ypos[o]);
                else {
                    if(ara[i][j]==7) {
                        con=true;
                    }
                    else {
                        con=false;
                    }
                }
            }
            if(!con) {
                break;
            }
        }
        if(con) {
            ansX=xpos[o]+1;
            ansY=ypos[o]+1;
            break;
        }
        o++;
    }

    cout << ansX << " " << ansY << endl;
}
