#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    int ara[N];

    for(int i=0; i<N;i++) {
        cin >> ara[i];
    }

    sort(ara,ara+N);
    /// sort(ArrayName, ArrayName+ArraySize);


    for(int i=0; i<N;i++) {
        cout << ara[i] << ((i==N-1)? "" : " ");
    }


    cout << endl;
    return 0;
}
