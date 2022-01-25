#include <bits/stdc++.h>
using namespace std;
int main () {
    float S=0,i=1;
    while (i<=100) {
        S+=(1/i);
        i++;
    }
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}
