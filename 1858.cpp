#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,x,min,ans=1;
    cin>>N;
    cin>>x;
    min=x;
    for (int i=1; i <N;i++) {
        cin>>x;
        if(x<min){
            min=x;
            ans=i+1;
        }
    }
    cout << ans << endl;
    return 0;
}
