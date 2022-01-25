#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int x[10];
    for (int i=0; i<10  ;i++ ) {
        x[i]=n;
        n*=2;
    }
    for (int i=0; i<10  ;i++ ) {
        cout << "N[" << i << "] = " << x[i] << endl;
    }
    return 0;
}

