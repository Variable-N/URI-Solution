#include <bits/stdc++.h>
using namespace std;
int main () {
    int a=0,b=1,c;
    cin>> c;
    while (c--) {
        cout << a;
        cout <<((c!=0)? " ":"" );
        int temp=a;
        a=b;
        b=temp+b;
    }
    cout << endl;

    return 0;
}
