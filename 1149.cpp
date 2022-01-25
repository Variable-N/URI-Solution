#include <bits/stdc++.h>
using namespace std;
int main () {
    int A,N,sum=0;
    cin >> A >> N;
    if (N<=0) {
        while (N<=0) {
            cin >> N;
        }
    }
    for (int i=1; i<=N;i++) {
        sum+=A++;
    }
    cout << sum << endl;
    return 0;
}
