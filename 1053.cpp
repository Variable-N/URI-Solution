#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,i,ans;
    cin >> N;
    ans=N;
    for(i=1; N-i>0;i++) {
        ans*=(N-i);

    }
    cout << ans << endl;
    return 0;
}
