#include <bits/stdc++.h>
using namespace std;
int main () {
    int degree;
    while (cin >> degree) {
        if(degree < 90 || degree==360) cout << "Bom Dia!!" << endl;
        else if (degree <180) cout << "Boa Tarde!!" << endl;
        else if (degree <270) cout << "Boa Noite!!" << endl;
        else cout << "De Madrugada!!" << endl;
    }
    return 0;
}
