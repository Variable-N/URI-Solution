#include <bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin >> N;
    while (N--) {
        string in="";
        cin >> in;
        float ans=0;
        int count = 0;
        while (in[count] != '\0')
        count++;
        ans=0.01*count;
        cout << fixed << setprecision(2) << ans <<  endl;
    }
    return 0;
}
