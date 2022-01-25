#include <bits/stdc++.h>
using namespace std;
int main () {
    float oldT, newT, per;
    cin >> oldT >> newT;
    per=((newT-oldT)*100)/oldT;
    cout << fixed << setprecision(2) << per << "%"<< endl;
    return 0;
}
