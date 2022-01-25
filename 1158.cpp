#include <bits/stdc++.h>
using namespace std;
int main () {
    int X;
    cin >> X;
    while (X--) {
        int A,B,sum=0;
        cin >> A >> B;
        for (int i=A; B!=0  ;i++ ) {
            if (i%2!=0) {
                sum+=i;
                B--;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
