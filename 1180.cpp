#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,c,min=0,index;
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c;
        if(i==0 || c<min) {
            min=c;
            index=i;
        }
    }
    cout << "Menor valor: " << min << "\nPosicao: " << index << endl;
    return 0;
}
