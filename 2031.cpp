#include <bits/stdc++.h>
using namespace std;
void solve (string p1, string p2) {
    if(p1=="ataque" && p2 =="pedra") cout << "Jogador 1 venceu"<< endl;
    else if(p2=="ataque" && p1 =="pedra") cout << "Jogador 2 venceu"<< endl;
    else if(p2=="ataque" && p1 =="papel") cout << "Jogador 2 venceu"<< endl;
    else if(p1=="ataque" && p2 =="papel") cout << "Jogador 1 venceu"<< endl;
    else if(p1=="pedra" && p2 =="papel") cout << "Jogador 1 venceu"<< endl;
    else if(p2=="pedra" && p1 =="papel") cout << "Jogador 2 venceu"<< endl;
    else if(p1=="papel" && p2==p1) cout << "Ambos venceram"<< endl;
    else if(p1=="pedra" && p2==p1) cout << "Sem ganhador"<< endl;
    else if(p1=="ataque" && p2==p1) cout << "Aniquilacao mutua"<< endl;
}
int main () {
    int N;
    cin >> N;
    while (N--) {
        string a,b;
        cin >> a >> b;
        solve (a,b);
    }
    return 0;
}
