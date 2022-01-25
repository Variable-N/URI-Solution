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
    for (int i=x; i<=y; i++) {
        if(i%13!=0) {
            count+=i;
        }
    }
    cout << count << endl;
    return 0;
}
