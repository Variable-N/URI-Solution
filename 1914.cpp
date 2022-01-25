#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        string p1,p1c,p2,p2c,result="";
        int a,b;
        cin >> p1 >> p1c >> p2 >> p2c >> a >> b;
        if ((a+b)%2==0) result="PAR";
        else result = "IMPAR";
        if(result==p1c) cout << p1 << endl;
        else cout << p2 << endl;
    }
    return 0;
}
