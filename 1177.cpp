#include <bits/stdc++.h>
using namespace std;
int main () {
    int N[1000];
    int T,a=0;
    cin>> T;
    for (int i=0; i<1000  ;i++ ) {
        cout << "N[" << i << "] = " << a << endl;
        a++;
        if(a==T) {
            a=0;
        }
    }
    return 0;
}
