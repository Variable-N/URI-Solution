#include <bits/stdc++.h>
using namespace std;
int main () {
    int x,y,count=0;
    cin >> x>>y;
    if(x>y) {
        int temp=x;
        x=y;
        y=temp;
    }
    for (int i=x+1; i<y; i++) {
        if(i%5==2 || i%5==3) {
            cout << i << endl;
        }
    }
    return 0;
}

