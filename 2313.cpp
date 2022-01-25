#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && c+a>b) {
        if(a==b && b==c) cout << "Valido-Equilatero" << endl;
        else if (a==b || b==c || a==c) cout << "Valido-Isoceles" << endl;
        else cout << "Valido-Escaleno" << endl;
        if(sqrt(pow(a,2)+pow(b,2))== c || sqrt(pow(a,2)+pow(c,2))== b || sqrt(pow(c,2)+pow(b,2))== a ) cout << "Retangulo: S" << endl;
        else cout << "Retangulo: N" << endl;
    }
    else cout << "Invalido" << endl;
    return 0;
}
