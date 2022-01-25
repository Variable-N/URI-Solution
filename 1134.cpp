#include <bits/stdc++.h>
using namespace std;
int main () {
    int c,A=0,G=0,D=0;
    cin >> c;
    while (c!=4) {
        if (c>0 && c<4) {
            if(c==1) A++;
            else if (c==2) G++;
            else D++;
        }
        cin>>c;
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << A << endl;
    cout << "Gasolina: " << G << endl;
    cout << "Diesel: " << D << endl;
    return 0;
}

