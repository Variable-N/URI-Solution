#include <bits/stdc++.h>
using namespace std;
int main () {
    string alphabet;
    while (cin >> alphabet) {
        int N;
        cin >> N;
        while (N--) {
            int d;
            cin >> d;
            cout << (alphabet.at(d-1)) << ((N==0)? "\n":"");
        }
    }
    return 0;
}
