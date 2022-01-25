#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    bool answer=false;
    cin >> N;
    int ara[N];
    for (int i=0; i<N; i++) {
        cin >> ara[i];
    }
    bool peak=false;
    if (ara[0]>ara[1]) peak=true;
    else peak=false;
    for (int i=1; i<N-1; i++) {
        if(peak) {
            if(ara[i]<ara[i+1]) {
                peak=false;
                answer = true;
            }
            else{
                answer=false;
                break;
            }
        }
        else {
            if(ara[i]>ara[i+1]) {
                peak=true;
                answer=true;
            }
            else {
                answer = false;
                break;
            }
        }
    }
    if(N==2 && ara[0]==ara[1]) {answer=false;}
    if(N==2 && ara[0]!=ara[1]) {answer=true;}
    cout << ((answer)? "1":"0") << endl;
    return 0;
}
