#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int N;
    cin >> N;
    double A=N/log(N),B=A*1.25506;
    cout << fixed << setprecision(1) << A << " " << B << endl;
    return 0;
}
