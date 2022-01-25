#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >> c;
    bool ans=false;
    if (a-b==0 || b-c==0 || a-c==0 || a+b-c==0 || b+c-a==0 || a+c-b==0) ans=true;
    cout << (ans? "S": "N") << endl;
    return 0;
}
