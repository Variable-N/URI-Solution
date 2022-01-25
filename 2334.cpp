#include <bits/stdc++.h>
using namespace std;
int main () {
    unsigned long long int a;
    cin >> a;
    while (a!=-1) {
        cout << ((a==0)? a: a-1) << endl;
        cin >> a;
    }
    return 0;
}
