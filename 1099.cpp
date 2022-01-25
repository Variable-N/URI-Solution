#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,x,y,count;
    cin >> N;
    for (int i=1; i<=N; i++) {
        cin >> x >> y;

        if(x>y) {
            count = y;
            y=x;
            x=count;
        }
        count = 0;
        for(int j =x+1; j<y; j++) {
            if(j%2!=0) {
                count+=j;
            }
        }
        cout << count << endl;
    }
    return 0;
}
