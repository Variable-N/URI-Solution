#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,guess=0;
    cin >> N;
    int ara[5];
    for (int i=0; i<=4;i++) {
        cin >> ara[i];
        if(ara[i]==N) guess++;
    }
    cout << guess << endl;
    return 0;
}
