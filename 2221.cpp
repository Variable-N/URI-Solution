#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        int B,ad,dd,ld,ag,dg,lg;
        cin >> B >> ad >> dd >> ld >> ag >>dg >> lg;
        double valueD = (ad+dd)/2;
        double valueG = (ag+dg)/2;
        if(ld%2==0) valueD+=B;
        if(lg%2==0) valueG+=B;
        if(valueD==valueG) cout << "Empate" << endl;
        else cout << ((valueD>valueG)? "Dabriel":"Guarte") << endl;
    }
    return 0;
}
