#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        int X,divsum=0;
        cin >> X;
        for (int i=2; i<=X/2  ;i++ ) {
            if(X%i==0) {
                divsum+=i;
            }
        }
        if(divsum==0) {
            cout << X << " eh primo" << endl;
        }
        else {
            cout << X << " nao eh primo"<< endl;
        }
    }
    return 0;
}


