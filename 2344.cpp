#include <bits/stdc++.h>
using namespace std;
int main () {
    int a;
    cin >> a;
    if (a==0) cout << "E";
    else if(a>0 && a<36) cout << "D";
    else if (a>35 && a <61) cout << "C";
    else if (a>60 && a <86) cout << "B";
    else cout << "A";
    cout << endl;
    return 0;
}
