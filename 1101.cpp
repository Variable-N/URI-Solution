#include <bits/stdc++.h>
using namespace std;
int main () {
    int m,n;
    cin >> m >> n;
    while (m>0 && n>0) {
        int sum=0;
        if (m>n) {
            int t=m;
            m=n;
            n=t;
        }
        for(int i=m; i<=n; i++) {
            cout << i << " " ;
            sum+=i;
        }
        cout << "Sum=" << sum << endl;
        cin >> m >> n;
    }
    return 0;
}

