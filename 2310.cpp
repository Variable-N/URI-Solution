#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    int succ [3]={0,0,0},attempts[3]={0,0,0};
    for (int i=1; i <=N; i++) {
        int a,b,c;
        string name;
        cin >> name;
        cin >> a >> b >> c;
        attempts[0]+=a;
        attempts[1]+=b;
        attempts[2]+=c;
        cin >> a >> b >> c;
        succ[0]+=a;
        succ[1]+=b;
        succ[2]+=c;
    }
    cout << "Pontos de Saque: "    << fixed << setprecision(2) << succ[0]/(double)attempts[0]*100 << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << succ[1]/(double)attempts[1]*100 << " %." << endl;
    cout << "Pontos de Ataque: "   << fixed << setprecision(2) << succ[2]/(double)attempts[2]*100 << " %." << endl;
    return 0;
}
