#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,slot,max;
    cin >> n >> slot;
    int ara[n];
    for(int i=0; i<n; i++) {
        cin >> ara[i];
    }
    sort(ara, ara+n);
    int counter=0;
    max=ara[n-1];
    bool flag=true;
    for(int i=n-1; i>=0; i--) {
        if(max==ara[i]) counter++;
        else if(flag) max=ara[i],i++;
        else break;
        if(counter>=slot) flag=0;;

    }
    cout << counter << endl;
    return 0;
}
