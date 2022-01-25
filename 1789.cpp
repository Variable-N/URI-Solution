#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    while (cin >> N) {
        int x, max=0;
        for(int i=1; i<=N; i++) {
            cin >> x;
            if(i==1|| x>max) {
                max=x;
            }
        }
        if (max<10) cout << "1" << endl;
        else if (max >=20) cout << "3" << endl;
        else cout << "2" << endl;
    }
    return 0;
}
