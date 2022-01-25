#include <bits/stdc++.h>
using namespace std;
int main () {
    int T, id;
    while (cin>>T) {
        cin >> id;
        int n,idn,counter=0;
        while (T--) {
            cin >> idn >> n;
            if(idn==id && n==0) counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
