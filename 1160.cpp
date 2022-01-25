#include <bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin >> T;
    while (T--) {
        int pa, pb, year=0;
        double ga,gb;
        cin >> pa >> pb >> ga >> gb;
        while (pa<=pb) {
            pa+=int(pa*ga/100);
            pb+=int(pb*gb/100);
            year++;
            if(year >102) {
                break;
            }
        }
        if (year>100){
            cout <<"Mais de 1 seculo." << endl;
        }
        else {
            cout << year << " anos." << endl;
        }
    }



    return 0;
}
