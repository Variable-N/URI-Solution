#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    int N,count=1;
    while (cin >> N) {
        int cnt=1;
        for(int i=1; i<=N;i++){
            for(int j=0; j<i;j++) cnt++;
        }
        cout << "Caso "<<count++ << ": " << cnt << ((cnt==1)? " numero":" numeros") << endl << "0";
        for(int i=1; i<=N;i++) {
            for(int j=0; j<i;j++) {
                cout << " ";
                cout << i;
            }

        }
        cout << "\n" << endl;
    }
    return 0;
}
