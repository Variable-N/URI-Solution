#include <bits/stdc++.h>
using namespace std;
int main () {
    double six,ans=1.0;
    six=2;
    int N;
    cin >> N;
    for(int i=2; i<=N; i++){
        six=2+1/six;
    }
    cout << fixed << setprecision(10) << ((N==0)?ans : ans+1/six) << endl;
    return 0;
}

