#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        int h,m,door;
        cin >> h >> m >> door;
        if(h<10) cout << '0';
        cout << h << ":";
        if (m<10) cout << '0';
        cout << m <<" - A porta " << ((door==1)? "abriu!":"fechou!" ) << endl;

    }
    return 0;
}
