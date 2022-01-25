#include <bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << ((s.length()>0 && s.length () <26)? "Y" : "N") << endl;
    }
    return 0;
}
