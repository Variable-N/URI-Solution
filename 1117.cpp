#include <bits/stdc++.h>
using namespace std;
int main () {
    int a=1;
    while (a!=2) {
        if(a==1) {
            int m=0;
            float sum=0;
            while (m!=2) {
                float x;
                cin >> x;
                if(x >=0 && x<=10) {
                    sum+=x;
                    m++;
                }
                else {
                    cout << "nota invalida" << endl;
                }
            }
            cout << "media = " << fixed << setprecision(2) << sum/2 << endl;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> a;
    }
    return 0;
}


