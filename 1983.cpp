#include <bits/stdc++.h>
using namespace std;
int main () {
    int N,selected;
    float max=0;
    cin >> N;
    for (int i=1; i<=N;i++) {
        int id;
        float notes;
        cin >> id >> notes;
        if(i==1 || max<notes) {
            selected=id;
            max=notes;
        }
    }
    if(max<8) cout << "Minimum note not reached" << endl;
    else cout <<  selected << endl;
    return 0;
}
