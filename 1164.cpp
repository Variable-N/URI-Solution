#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        int X,divsum=0;
        cin >> X;
        for (int i=1; i<=X/2  ;i++ ) {
            if(X%i==0) {
                divsum+=i;
            }
        }
        if(divsum==X) {
            cout << X << " eh perfeito" << endl;
        }
        else {
            cout << X << " nao eh perfeito"<< endl;
        }
    }
    return 0;
}

