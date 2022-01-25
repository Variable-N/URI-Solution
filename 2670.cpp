#include <bits/stdc++.h>
using namespace std;
int main () {
    int f1,f2,f3;
    cin >> f1 >> f2 >> f3;
    int t1=f3*4+f2*2, t2 = f1*2+f3*2, t3 = f1*4+f2*2;
    cout << min(t1, min(t2,t3)) << endl;
    return 0;
}
