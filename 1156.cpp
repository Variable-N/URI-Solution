#include <bits/stdc++.h>
using namespace std;
int main () {
    float S=0,i=1,j=1;
    while (i<=39) {
        S+=(i/j);
        i+=2;
        j*=2;
    }
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}
