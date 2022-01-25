#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,M;
    while (cin >> N && cin >> M) {
        int ara[N];
        for(int i=0; i<N; i++) {
            cin >> ara[i];
        }
        sort(ara,ara+(sizeof(ara)/sizeof(ara[0])));
        while(M--) {
            int j;
            cin>> j;
            cout << ara[N-j] << endl;
        }
    }
    return 0;
}
