#include <bits/stdc++.h>
using namespace std;
void solve (int dd) {
    string ans;
    if (dd==61) {
        ans="Brasilia";
    }
    else if (dd==71) {
        ans="Salvador";
    }
    else if (dd==11) {
        ans="Sao Paulo";
    }
    else if (dd==21) {
        ans="Rio de Janeiro";
    }
    else if (dd==32){
        ans="Juiz de Fora";
    }
    else if (dd==19) {
        ans="Campinas";
    }
    else if (dd==27) {
        ans="Vitoria";
    }
    else if(dd==31) {
        ans="Belo Horizonte";
    }
    else {
        ans="DDD nao cadastrado";
    }
    cout << ans << endl;
}
int main () {
    int ddd;
    cin >>ddd;
    solve(ddd);
    return 0;
}
