#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int N,loot=0,cnt=0,sum=0;
    cin >> N;
    long long int ini[N],ara [N];
    for (int i=0; i<N; i++) {
        cin>> ara[i];
        ini[i]=ara[i];
    }
    while(loot!=-1 &&loot !=N) {
        if(ara[loot]==0) break;
        if(ara[loot]%2!=0) {
            ara[loot]-=1;
            loot++;
        }
        else if (ara[loot]%2==0) {
            ara[loot]-=1;
            loot--;
        }

    }
    for (int i=0; i<N; i++) {
        sum+=ara[i];
        if(ara[i]!=ini[i]) cnt++;
    }
    cout << cnt << " " << sum << endl;
    return 0;
}
