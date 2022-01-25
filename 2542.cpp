#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    while (cin>>N) {
        int a,b;
        cin >> a >> b;
        int acard[a][N], bcard[b][N];
        for (int i=0; i<a  ;i++ ) {
            for (int j=0; j<N  ;j++ ) {
                cin>>acard[i][j];
            }
        }
        for (int i=0; i<b  ;i++ ) {
            for (int j=0; j<N  ;j++ ) {
                cin>>bcard[i][j];
            }
        }
        int ia,ib,j;
        cin >> ia >> ib >> j;
        ia--;
        ib--;
        j--;
        if(acard[ia][j]==bcard[ib][j]) cout << "Empate" << endl;
        else cout << ((acard[ia][j]>bcard[ib][j])? "Marcos":"Leonardo") << endl;
    }
    return 0;
}
