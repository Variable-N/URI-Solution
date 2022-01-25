#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) {
        int r,g,b,ans;
        string mode;
        cin >> mode >> r >> g >> b;
        if(mode=="eye") ans=r*0.3+g*0.59+b*0.11;
        else if (mode=="min") ans=min(r,min(g,b));
        else if (mode=="mean") ans=(r+g+b)/3;
        else ans=max(r,max(g,b));
        cout << "Caso #" << i << ": " << ans << endl;
    }
    return 0;
}
