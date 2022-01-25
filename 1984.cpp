#include <bits/stdc++.h>
using namespace std;
int main () {
    long long int N,temp;
    cin >> N;
    while (N!=0) {
        cout << N%10;
        N/=10;
    }
    cout << endl;
    return 0;
}
