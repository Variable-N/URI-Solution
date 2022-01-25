#include <bits/stdc++.h>
using namespace std;
void solve (int ih,int im, int fh, int fm) {
    int ansh, ansm;
    if(ih >= fh) {
        ansh=fh+24-ih;
    }
    else {
        ansh=fh-ih;
    }
    if(im > fm) {
        ansm=fm+60-im;
        ansh--;
    }
    else {
        ansm=fm-im;
    }
    if(ih==fh && ansh==24&& im!=fm) {
        ansh=0;
    }
    cout << "O JOGO DUROU "<<ansh<<" HORA(S) E " <<ansm <<" MINUTO(S)" << endl;
}
int main () {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    solve(a,b,c,d);
    return 0;
}
