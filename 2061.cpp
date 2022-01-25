#include <bits/stdc++.h>
using namespace std;
int main () {
    int tab,N;
    string action;
    cin >> tab >> N;
    while (N--) {
        cin >> action;
        if(action[0]=='f') tab++;
        else tab--;
    }
    cout << tab << endl;
    return 0;
}
