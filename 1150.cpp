#include <bits/stdc++.h>
using namespace std;
int main () {
    int X,Z,sum=0,c=0;
    cin >> X >> Z;
    while (Z<=X) {
        cin >> Z;
    }
    for (int i=X; sum < Z ;i++) {
        sum+=i;
        c++;
    }
    cout << c << endl;
    return 0;
}
