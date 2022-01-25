#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    int index=1, max=N;
    for (int i=2; i<=100; i++ ) {
        cin>> N;
        if(N>max) {
            max=N;
            index=i;
        }
    }
    cout << max << "\n" << index << endl;
    return 0;
}


